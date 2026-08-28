#include<stdio.h>

  int main()
	{
		
	int start,end;
	printf("Enter the Starting range of table:");
	scanf("%d",&start);

	printf("Enter the Ending range of table:");
	scanf("%d",&end);

	  for(int i=start;i<=end;i++)
		{
		   for(int j=1;j<=10;j++)
			{
				printf("%d \t",i*j);
			}
		printf("\n");
		}

	return 0;
	}
