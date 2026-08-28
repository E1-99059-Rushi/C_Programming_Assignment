#include<stdio.h>

  int main()
	{

	int num,fact;
	printf("Enter the number to find their factors:");
	scanf("%d",&num);

	printf("All Factors:");
	int i=1;
	while(i<num)
	{
		if(num%i==0)
			{
			printf("%d ",i);
			}
		i++;
	}
	
	printf("\n");

	return 0;
	}
