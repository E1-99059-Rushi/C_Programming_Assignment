#include<stdio.h>

  int main()
	{

	int num;
	char ch;

	printf("Enter number:");
	scanf("%d",&num);

	printf("Enter Character:");
	scanf(" %c",&ch);

	for(int i=0;i<num;i++)
		{
			printf("%c ",ch);
		}
	printf("\n");
	return 0;
	}
