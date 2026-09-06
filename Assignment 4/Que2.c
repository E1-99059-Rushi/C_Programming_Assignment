#include<stdio.h>
void power(int base,int index);

void power(int base, int index)
{
	int result = 1;
	int i;
	for(i = 1; i <= index; i++)
		{	
			result = result * base;	
		}
	printf("power of %d is :%d \n", base,result); 

}



int main()
{
	int base,index;
	printf("Enter Base : ");
	scanf("%d",&base);
	
	printf("Enter Index : ");
	scanf("%d",&index);
	
	power(base,index);


return 0;
}
