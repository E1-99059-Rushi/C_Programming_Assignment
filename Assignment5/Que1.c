#include<stdio.h>
void cal_total(int * arr);
void cal_avg(int total);


void cal_total(int *arr)
{
	int total = 0;

	for(int i = 0;i < 5;i++)
		{
			printf("Enter %d index marks: ", i);
			scanf("%d", arr+i);
		}

	for(int i = 0; i < 5;i++)
		{
			total += *(arr + i);
			
		}
	printf("Total of 5 subject marks is : %d \n ",total);

	cal_avg(total);

}

void cal_avg(int total)
{
	float avg = total/5;

	printf("Average of 5 subject is : %.2f \n" ,avg);

}

int main()
{
	int arr[5];
	cal_total(arr);
	



return 0;

}
