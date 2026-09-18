#include <stdio.h>

void copy_file(FILE *source, FILE *destination)
{
    char ch;

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }
}

int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    copy_file(source, destination);

    fclose(source);
    fclose(destination);

    printf("File copied successfully\n");

    return 0;
}
