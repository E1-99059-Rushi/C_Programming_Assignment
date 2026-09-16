#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

void acceptStudents(struct Student arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &arr[i].rollNumber);
        printf("Name: ");
        scanf("%s", arr[i].name);
        printf("Marks: ");
        scanf("%f", &arr[i].marks);
    }
}

void printStudents(struct Student arr[], int n) {
    printf("\n--- Student Records ---\n");
    for(int i = 0; i < n; i++) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", arr[i].rollNumber, arr[i].name, arr[i].marks);
    }
}

int main() {
    struct Student arr[3];
    acceptStudents(arr, 3);
    printStudents(arr, 3);
    return 0;
}
