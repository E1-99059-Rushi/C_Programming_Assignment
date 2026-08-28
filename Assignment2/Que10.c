#include<stdio.h>

int main()
{ 
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);

	if(ch >= 'A' && ch <= 'Z')
		printf("Character is Upper Case.\n");
	else if(ch >= 'a' && ch <= 'z')
		printf("Character is Lower Case.\n");
	else if(ch >= '0' && ch <= '9')
		printf("Character is Digit.\n");
	else if(ch ==32 || ch ==9 || ch == 13 || ch ==10)
		printf("Character is Space.\n");
	else
		printf("Character is Other.\n");

	

	return 0;
}
