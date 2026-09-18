#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

enum Menu
{
    EXIT,
    ADD,
    DISPLAY,
    SEARCH_ROLL,
    SEARCH_NAME,
    MODIFY,
    REMOVE
};

void add_student()
{
    FILE *fp;
    struct Student s;

    fp = fopen("students.dat", "ab");

    if (fp == NULL)
    {
        printf("File error\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);

    printf("Student added successfully\n");
}

void display_students()
{
    FILE *fp;
    struct Student s;

    fp = fopen("students.dat", "rb");

    if (fp == NULL)
    {
        printf("No records found\n");
        return;
    }

    printf("\nStudent Records\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("\nRoll  : %d", s.roll);
        printf("\nName  : %s", s.name);
        printf("\nMarks : %.2f\n", s.marks);
    }

    fclose(fp);
}

void search_roll()
{
    FILE *fp;
    struct Student s;
    int roll;
    int found = 0;

    printf("Enter roll number: ");
    scanf("%d", &roll);

    fp = fopen("students.dat", "rb");

    if (fp == NULL)
    {
        printf("File not found\n");
        return;
    }

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.roll == roll)
        {
            printf("\nRoll  : %d", s.roll);
            printf("\nName  : %s", s.name);
            printf("\nMarks : %.2f\n", s.marks);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Student not found\n");
    }

    fclose(fp);
}

void search_name()
{
    FILE *fp;
    struct Student s;
    char name[50];
    int found = 0;

    printf("Enter name: ");
    scanf("%s", name);

    fp = fopen("students.dat", "rb");

    if (fp == NULL)
    {
        printf("File not found\n");
        return;
    }

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (strcmp(s.name, name) == 0)
        {
            printf("\nRoll  : %d", s.roll);
            printf("\nName  : %s", s.name);
            printf("\nMarks : %.2f\n", s.marks);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Student not found\n");
    }

    fclose(fp);
}

void modify_student()
{
    FILE *fp;
    struct Student s;
    int roll;
    int found = 0;

    printf("Enter roll number to modify: ");
    scanf("%d", &roll);

    fp = fopen("students.dat", "rb+");

    if (fp == NULL)
    {
        printf("File not found\n");
        return;
    }

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.roll == roll)
        {
            printf("Enter new name: ");
            scanf("%s", s.name);

            printf("Enter new marks: ");
            scanf("%f", &s.marks);

            fseek(fp, -sizeof(s), SEEK_CUR);

            fwrite(&s, sizeof(s), 1, fp);

            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Record modified successfully\n");
    else
        printf("Student not found\n");

    fclose(fp);
}

void remove_student()
{
    FILE *fp, *temp;
    struct Student s;
    int roll;
    int found = 0;

    printf("Enter roll number to remove: ");
    scanf("%d", &roll);

    fp = fopen("students.dat", "rb");
    temp = fopen("temp.dat", "wb");

    if (fp == NULL || temp == NULL)
    {
        printf("File error\n");
        return;
    }

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.roll == roll)
        {
            found = 1;
        }
        else
        {
            fwrite(&s, sizeof(s), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found == 1)
        printf("Record removed successfully\n");
    else
        printf("Student not found\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n\n===== STUDENT DATABASE =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Modify Student\n");
        printf("6. Remove Student\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case ADD:
                add_student();
                break;

            case DISPLAY:
                display_students();
                break;

            case SEARCH_ROLL:
                search_roll();
                break;

            case SEARCH_NAME:
                search_name();
                break;

            case MODIFY:
                modify_student();
                break;

            case REMOVE:
                remove_student();
                break;

            case EXIT:
                printf("Program ended\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != EXIT);

    return 0;
}
