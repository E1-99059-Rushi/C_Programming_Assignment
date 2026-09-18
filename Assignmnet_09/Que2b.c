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
    char data[100];

    source = fopen("source.txt", "r");
    destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL)
    {
        printf("File error\n");
        return 1;
    }

    printf("Source file contents:\n");

    while ((ch = fgetc(source)) != EOF)
    {
        printf("%c", ch);
    }

    rewind(source);

    copy_file(source, destination);

    printf("\nEnter data to write:\n");
    scanf(" %[^\n]", data);

    fprintf(destination, "\n%s", data);

    fclose(source);
    fclose(destination);

    printf("Data written successfully\n");

    return 0;
}
