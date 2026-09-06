#include<stdio.h>
void print_char(int num, char ch);

void print_char(int num, char ch)
{
	for(int i = 0; i <= num; i++)
		{
			printf("%c \n",ch);
		}


}

int main()
{
	int num;
	char ch;
	
	printf("Enter number : ");
	scanf("%d",&num);

	printf("Enter character : ");
	scanf(" %c",&ch);
	
	print_char(num,ch);

return 0;
}
