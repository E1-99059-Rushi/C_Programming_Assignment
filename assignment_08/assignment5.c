#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

void sortByRoll(struct Student arr[], int n) {
    struct Student temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j].rollNumber > arr[j + 1].rollNumber) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortByName(struct Student arr[], int n) {
    struct Student temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(strcmp(arr[j].name, arr[j + 1].name) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
