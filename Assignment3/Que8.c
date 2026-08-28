#include<stdio.h>

  int main()
	{

	int num;
	printf("Enter the number to find their prime factor:");
	scanf("%d",&num);


	int i=2;
	while(i<=num)
	{
		if(num%i==0)
		    {
			if(num!=i)
			{
			printf("%d * ",i);
			num=num/i;
			}
			
			else
			{
		        printf("%d",i);
			num=num/i;
			}
	            
		     }  
		else{
			i++;
		    } 
	}
	
	printf("\n");

	return 0;
	}
