#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void accept(char *names[5])
{
    int i;

    for(i = 0; i < 5; i++)
    {
        names[i] = malloc(30 * sizeof(char));

        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
}

void display(char *names[5])
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }
}

void sort(char *names[5])
{
    int i, j;
    char *temp;

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

void freeMemory(char *names[5])
{
    int i;

    for(i = 0; i < 5; i++)
    {
        free(names[i]);
    }
}

int main()
{
    char *names[5];

    accept(names);

    printf("\nNames:\n");
    display(names);

    sort(names);

    printf("\nSorted names:\n");
    display(names);

    freeMemory(names);

    return 0;
}
