#include <stdio.h>

int main()
{
    int num;

    printf("Enter a 4 digit number: ");
    scanf("%d", &num);

    // Face value
    printf("Face value: ");
    printf("%d ", num / 1000);
    printf("%d ", (num / 100) % 10);
    printf("%d ", (num / 10) % 10);
    printf("%d\n", num % 10);

    // Place value
    printf("Place value: ");
    printf("%d + ", (num / 1000) * 1000);
    printf("%d + ", ((num / 100) % 10) * 100);
    printf("%d + ", ((num / 10) % 10) * 10);
    printf("%d\n", num % 10);

	//Reverse number
    printf("%d%d%d%d\n", num % 10,
           (num / 10) % 10,
           (num / 100) % 10,
           num / 1000);

    return 0;
}
