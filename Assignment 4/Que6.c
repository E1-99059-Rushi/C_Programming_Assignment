#include<stdio.h>
void print_char(int num, char ch);

void print_char(int num, char ch)
{
		int space,value;
	for(int i = 0; i < num; i++)
		{
			
				{
					for (space = 0; space < num - i - 1; space++)
					            printf("  ");

        				value = 1;

        				for (int j = 0; j <= i; j++)
        				{
            					printf("%c   ", ch);

            					value = value * (i - j) / (j + 1);
        				}
					
				}
		printf("\n");
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
