#include<stdio.h>

  int main()
	{
	int num;
	int flag=1;
	printf("Enter the number:");
	scanf("%d",&num);

	if(num<=1)
		{
		  printf("Enter valid number");
		}

	else if(num==2)
		{
		  printf("%d is  a prime number.\n",num);
		}
	else
		{
		  for(int i=2;i<num/2;i++)
			{
			   if(num % i == 0)
			       {
				flag=0;
				break;
				}
			}
		}
	if(flag==0)
		{
		  printf("%d is not a prime number.\n",num);
		}
	else
		{
		   printf("%d is a prime number.\n",num);
		}
	return 0;
	}
