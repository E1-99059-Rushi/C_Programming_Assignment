#include <stdio.h>
#include <string.h>

void accept(char names[5][30])
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

void display(char names[5][30])
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }
}

void sort(char names[5][30])
{
    int i, j;
    char temp[30];

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main()
{
    char names[5][30];

    accept(names);

    printf("\nNames before sorting:\n");
    display(names);

    sort(names);

    printf("\nNames after sorting:\n");
    display(names);

    return 0;
}
