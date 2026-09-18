#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void write_student()
{
    FILE *fp;
    struct Student s;

    fp = fopen("student.txt", "w");

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

    fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);

    fclose(fp);

    printf("Record saved\n");
}

void read_student()
{
    FILE *fp;
    struct Student s;

    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return;
    }

    fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks);

    printf("\nStudent Details\n");
    printf("Roll  : %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);

    fclose(fp);
}

int main()
{
    write_student();
    read_student();

    return 0;
}
