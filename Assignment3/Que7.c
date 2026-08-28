#include<stdio.h>

  int main()
	{

	int num,fact;
	printf("Enter the number to find their factors:");
	scanf("%d",&num);

	printf("All Factors:\n");
	int i=1;

	fact=num;
	while(i<fact)
	{
		if(num%i==0)
		{ 
 			fact=num/i;
		  printf("%d * %d : %d \n",i,fact,num);
		  
		 }
		i++;
	}
	
	printf("\n");

	return 0;
	}
