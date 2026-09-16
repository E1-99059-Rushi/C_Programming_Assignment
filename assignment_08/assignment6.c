#include <stdio.h>

struct SchoolStudent {
    int rollNumber;
    char name[50];
    int standard;
    union {
        char grade;       // For standard <= 4
        float percentage; // For standard > 4
    } result;
};

int main() {
    struct SchoolStudent arr[3];
    for(int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &arr[i].rollNumber);
        printf("Name: ");
        scanf("%s", arr[i].name);
        printf("Standard: ");
        scanf("%d", &arr[i].standard);
        
        if(arr[i].standard <= 4) {
            printf("Enter Grade (A/B/C): ");
            scanf(" %c", &arr[i].result.grade);
        } else {
            printf("Enter Percentage: ");
            scanf("%f", &arr[i].result.percentage);
        }
    }

    printf("\n--- School Student Records ---\n");
    for(int i = 0; i < 3; i++) {
        printf("Roll: %d | Name: %s | Standard: %d | ", arr[i].rollNumber, arr[i].name, arr[i].standard);
        if(arr[i].standard <= 4) {
            printf("Grade: %c\n", arr[i].result.grade);
        } else {
            printf("Percentage: %.2f%%\n", arr[i].result.percentage);
        }
    }
    return 0;
}
