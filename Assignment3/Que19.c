#include<stdio.h>

  int main()
	{
		
	int start,end;
	printf("Enter the Starting range of table:");
	scanf("%d",&start);

	printf("Enter the Ending range of table:");
	scanf("%d",&end);

	  for(int i=1;i<=10;i++)
		{
		   for(int j=start;j<=end;j++)
			{
				printf("%d ",i*j);
			  		
			}
		printf("\n");
		
		}

	return 0;
	}
