#include<stdio.h>

int main()
{  
	float num1,num2;
	printf("Enter two numbers:");
	scanf("%f %f",&num1,&num2);

	if(num2==0)
		{
			printf("Error:Number not divide by zero\n");

		}
	else{
		 printf("Division of two number is: %.2f\n",num1/num2);
         	}	

	return 0;
}
