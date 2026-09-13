#include<stdio.h>
void accept_ele(int * arr);
void print_ele(int * arr);
void reverse_arr(int arr[]);


void accept_ele(int *arr)
{
	for(int i = 0;i < 5;i++)
		{
			printf("Enter %d index : ", i);
			scanf("%d", arr+i);
		}
}

void reverse_arr(int arr[])
{
	for(int i = 0 ; i < 5/2; i++)
		{
			int temp = arr[i];
			arr[i] = arr[4-i];
			arr[4-i] = temp;
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
	reverse_arr(arr);
	print_ele(arr);
	



return 0;

}
