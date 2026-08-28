#include<stdio.h>

  int main()
	{
	int num1,num2,a,b;
	printf("Enter Number1:");
	scanf("%d",&num1);

	printf("Enter Number2:");
	scanf("%d",&num2);
	
	 a=num1;
	 b=num2;
	int res;
	while(num2 > 0)
	{
		 res = num1%num2;
		printf("%d %% %d: %d \n",num1,num2,res);
		num1=num2;
		num2=res;
		

	}
	printf("GCD of %d and %d is %d\n",a,b,num1);

	return 0;
	}
