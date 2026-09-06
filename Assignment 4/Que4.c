#include<stdio.h>
int calculator(int num1,int num2,char ch);

int flag =1;

int calculator(int num1,int num2,char ch)
{
	
	if(ch == '+')
		{	
			return num1 + num2;
		}

	else if(ch == '-')
		{	
			return num1 - num2;
		}

	else if(ch == '*')
		{	
			return num1 * num2;
		}

	else if(ch == '/')
		{	
			if(num2 == 0)
				{	
					return 0;
					
				}
			else
				{
					return num1/num2;
				}
		}
	else
		{
			return 0;
		}
}

int main()
{
	int num1,num2;
	char ch;

	printf("Enter First number: ");
	scanf("%d",&num1);

	printf("Enter Second Number : ");
	scanf("%d",&num2);
	
	printf("Enter operator : ");
	scanf(" %c",&ch);
	
	if(num2 == 0 && ch == '/')
			flag =0;
	if(flag == 0)
		printf("number is not divisibale by zero.\n");
	
	int value = calculator(num1,num2,ch);
	printf("Result : %d \n",value);
	
return 0;
}

