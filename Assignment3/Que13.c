#include<stdio.h>

  int main()
	{
	int num,temp;
	int n1=0, n2=1;
	printf("Enter the range to find Fibonacci series:");
	scanf("%d",&num);
	
	printf("1,");
	for(int i=1; i < num; i++)
	{
	    temp=n1+n2;
	    n1=n2;
	    n2=temp;
	
	 printf("%d,",temp);

	}
	
	printf("\b \n");
	

	return 0;
	}
