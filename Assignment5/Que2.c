#include<stdio.h>
void accept_ele(int * arr);
void print_ele(int * arr);


void accept_ele(int *arr)
{
	for(int i = 0;i < 5;i++)
		{
			printf("Enter %d index : ", i);
			scanf("%d", arr+i);
		}
}

void print_ele(int *arr)
{

	for(int i = 0;i < 5;i++)
		{
			printf("Element at %d index :%d \n", i,*(arr + i) );
		}

}

int main()
{
	int arr[5];
	accept_ele(arr);
	print_ele(arr);
	



return 0;

}
