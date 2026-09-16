#include<stdio.h>

void remove_char(char *str,char ch)
{
	int i,j;
	for(i =0;str[i]!='\0';i++)
	{
		if(str[i]!=ch)
		{
			str[j]=str[i];
			j++;
		}
	}
	str[j]='\0';
}
int main()
{
	char str[100];
	char ch;

	printf("Enter string:");
	scanf("%[^\n]",str);

	printf("Enter Character to remove:");
	scanf(" %c",&ch);

	remove_char(str,ch);
	printf("After removing'%c': %s\n",ch,str);
	
	return 0;
}
