#include<stdio.h>

int main()
{ 
	int num;
	printf("Enter number to check whether is positive or negative:");
     	scanf("%d",&num);

        if(num>0)
	     printf("%d is positive number.\n",num);

	else if(num<0)
	      printf("%d is negative number.\n",num);	
	
	else
 	     printf("Number is zero.\n");


	return 0;
}
