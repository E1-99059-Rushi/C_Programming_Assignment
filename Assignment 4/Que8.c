#include<stdio.h>
int fib();

int fib()
{
	static int temp,a=0, b=1;
	
			temp =a;    // temp =0,a=1,b=1,return 0
			a = b;		// temp =1, a=1 ,b=2 return 1;
			b = temp + a;
			
			return temp;
		
		


}
int main()
{
	int num;
	printf("Enter the number of fib series: ");
	scanf("%d",&num);
	
	for(int i = 1 ; i<= num ; i++)	
	{
			int value = fib();
			printf("%d  ",value);
 
	}
	printf("\n");
return 0;
}
