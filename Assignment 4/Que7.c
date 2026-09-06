#include<stdio.h>
void fib(int num);

void fib(int num)
{
	int a=0, b=1;
	printf("fib series : %d   %d  ",a,b);
	
	for(int i = 1 ; i<= num ; i++)
		{	
			int temp =a + b;
			a = b;
			b = temp;
			printf("%d  ",b);
		
		}
	printf("\n");


}
int main()
{
	int num;
	printf("Enter the number of fib series: ");
	scanf("%d",&num);
	
	fib(num);


return 0;
}
