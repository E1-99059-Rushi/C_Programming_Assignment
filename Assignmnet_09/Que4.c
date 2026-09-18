#include <stdio.h>

void copy_file(FILE *source, FILE *destination)
{
    char line[200];

    while (fgets(line, sizeof(line), source) != NULL)
    {
        fputs(line, destination);
    }
}

int main(int argc, char *argv[])
{
    FILE *source, *destination;

    if (argc != 3)
    {
        printf("Usage: ./a.out source.txt destination.txt\n");
        return 1;
    }

    source = fopen(argv[1], "r");
    destination = fopen(argv[2], "w");

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
