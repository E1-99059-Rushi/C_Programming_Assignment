#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter the three side of triangle:");
    scanf("%d %d %d",&a,&b,&c);

    printf("Perimeter of triangle is: %d\n",a+b+c);

    float s=(a+b+c)/2.0;

    float Area =(float)sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle is: %.2f\n",Area);

    return 0;
}

