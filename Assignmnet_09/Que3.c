#include <stdio.h>

void copy_file(FILE *source, FILE *destination)
{
    char line[200];

    while (fgets(line, sizeof(line), source) != NULL)
    {
        fputs(line, destination);
    }
}

int main()
{
    FILE *source, *destination;

    source = fopen("source.txt", "r");
    destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL)
    {
        printf("File error\n");
        return 1;
    }

    copy_file(source, destination);

    fclose(source);
    fclose(destination);

    printf("File copied successfully\n");

    return 0;
}
