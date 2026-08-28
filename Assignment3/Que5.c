#include<stdio.h>

  int main()
	{
     	 int num;
	 int fact=1;
	 printf("Enter the number to find Factorial:");
	 scanf("%d",&num);

  	int i=num;

	while(i>=1)
     {
	fact=fact*i;
	printf("%d *",i);
	i--;
	
    }
	
	printf("\b:%d\n",fact);
	return 0;
	}
