#include<stdio.h>
void max_num(int arr[], int n);
void accept_value(int arr[],int n);

void accept_value(int arr[],int n)
{
	for(int i =0 ;i < n ;i++)
		{
			printf("arr[%d] : ",i);
			scanf("%d",&arr[i]);

		}



}
void max_num(int arr [],int n)
{	
	int i;
	int max =arr[0];
	for(i = 1; i < n; i++)
		{
			if (arr[i] > max )
				{
					max= arr[i];
				}
		}
	
	printf("Maximum number : %d \n ",max );



}

int main()
{
	int n;
	printf("Enter the size of arr : ");
	scanf("%d",&n);
	int arr[n];	
	accept_value(arr,n);
	max_num(arr, n);


return 0;
}
