#include<stdio.h>

int main()
{ 
 	int num1,num2,num3;
	printf("Enter number 1:");
	scanf("%d",&num1);

	printf("Enter number 2:");
	scanf("%d",&num2);
	
	printf("Enter number 3:");
	scanf("%d",&num3);
	/*
     	if(num1>num2)
	   
	{
		if(num1>num3)
		       printf("%d is greater.\n",num1);
	 
		else
		        printf("%d is greater.\n",num3);
	}
           
	else
	{
	    if(num2>num3)
	            printf("%d is greater.\n",num2);
             else
                    printf("%d is greater.\n",num3);
	}
	*/
	//Ternery operator	
	num1>num2?
        num1>num3?printf("%d is greater .\n",num1):
	 printf("%d is greater.\n",num3):
	num2>num3?printf("%d is greater.\n",num2):
	 printf("%d is greater.\n",num2);


	return 0;
}
