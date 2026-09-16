#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

void searchByRoll(struct Student arr[], int n, int targetRoll) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i].rollNumber == targetRoll) {
            printf("Found: Roll: %d, Name: %s, Marks: %.2f\n", arr[i].rollNumber, arr[i].name, arr[i].marks);
            found = 1;
            break;
        }
    }
    if(!found) printf("Student with roll %d not found.\n", targetRoll);
}

void searchByName(struct Student arr[], int n, char targetName[]) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(strcmp(arr[i].name, targetName) == 0) {
            printf("Found: Roll: %d, Name: %s, Marks: %.2f\n", arr[i].rollNumber, arr[i].name, arr[i].marks);
            found = 1;
            break;
        }
    }
    if(!found) printf("Student with name %s not found.\n", targetName);
}
