#include<stdio.h>

int main()
{
/*
	for(int i=2;i<=100;i++)
		{
			int flag =1;
		 	for(int j=2; j<i;j++)
				{
				if(i%j==0)
					{
					flag=0;
					break;	
					}
				}
			if(flag==1)
				printf("%d \t",i);
		}
	printf("\n");

*/
	//------------Armstrong Number--------------

	int n,temp,rem,sum;
	for(int i=1;i<=500;i++)
		{
			n=i;
			temp=n;
			sum=0;
			
		    while(n!=0)	
			{
				rem =n%10;
				sum=sum + rem * rem *rem;
				n=n/10;

 			}
			 if(sum == temp )
				{
				printf("%d ",i);
				}
		}
	printf("\n");
	return 0;
}
