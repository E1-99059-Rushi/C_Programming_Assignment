#include <stdio.h>

struct BitStudent {
    unsigned int standard : 4; // 4 bits (up to standard 12)
    unsigned int gender : 1;   // 1 bit (0 or 1)
    unsigned int age : 6;      // 6 bits (covers age up to 32)
    int rollNumber;
    char name[50];
};

int main() {
    struct BitStudent arr[3];
    int std_input, gender_input, age_input;

    for(int i = 0; i < 3; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &arr[i].rollNumber);
        printf("Name: ");
        scanf("%s", arr[i].name);
        
        printf("Standard (1-12): ");
        scanf("%d", &std_input);
        arr[i].standard = std_input;

        printf("Gender (0 for Male, 1 for Female): ");
        scanf("%d", &gender_input);
        arr[i].gender = gender_input;

        printf("Age (max 32): ");
        scanf("%d", &age_input);
        arr[i].age = age_input;
    }

    printf("\n--- Bit-field Student Records ---\n");
    for(int i = 0; i < 3; i++) {
        printf("Roll: %d | Name: %s | Standard: %u | Gender: %s | Age: %u\n", 
               arr[i].rollNumber, arr[i].name, arr[i].standard, 
               arr[i].gender == 0 ? "Male" : "Female", arr[i].age);
    }
    return 0;
}
