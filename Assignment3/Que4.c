#include<stdio.h>

  int main()
	{
     	 int num;
	 int fact=1;
	 printf("Enter the number to find Factorial:");
	 scanf("%d",&num);

  	int i=1;

	while(i<=num)
     {
	fact=fact*i;
	
	if(num == i)
	    { 
		printf("%d ",i);
		i++;
            }
	else
           {
		printf("%d * ",i);
		i++;
	   }
    }
	
	printf(":%d\n",fact);
	return 0;
	}
