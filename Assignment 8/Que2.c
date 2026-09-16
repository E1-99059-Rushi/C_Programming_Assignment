#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

void acceptStudent(struct Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &s->rollNumber);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

void printStudent(struct Student s) {
    printf("\nRoll Number: %d\nName: %s\nMarks: %.2f\n", s.rollNumber, s.name, s.marks);
}

int main() {
    struct Student s;
    acceptStudent(&s);
    printStudent(s);
    return 0;
}
