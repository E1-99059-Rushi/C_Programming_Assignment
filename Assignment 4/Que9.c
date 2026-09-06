#include<stdio.h>
void prime(int num);
void range(int num);

void prime(int num)
{
	int flag = 0;
	if(num < 2)
		printf("number is not prime.\n");
	
	else if(num == 2)
		printf("number is prime.\n");

	else{
		for(int i = 2;i < num ; i++)
			{ 
				if(num % i == 0)
					flag =1;	
			}
		}
	if(flag == 1)	
		printf("number is not prime.\n");
	else
		printf("number is prime.\n");

}

void range(int num)
{

printf("prime number upto %d \n",num);

for(int i = 2; i <= num; i++)
	{	
	
	int flag = 0;
	for(int j = 2;j < i ; j++)
			{ 
				if(i % j == 0)
					flag =1;	
			}
		
	if(flag == 0)	
		printf("%d \n",i);
	}
}
int main()
{
	int num;
	printf("Enter the number to find prime or not and upto range: ");
	scanf("%d",&num);
	
	prime(num);
	range(num);


return 0;
}
