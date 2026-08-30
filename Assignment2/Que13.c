#include<stdio.h>

int main()
{ 

	int num1,num2;
	char op;

	printf("Enter First number:");
	scanf("%d",&num1);

	printf("Enter Second number:");
	scanf("%d",&num2);

	printf("1] '+'\n 2] '-' \n 3] '*' \n 4] '/' \n");
	printf("choice Operation:");
	scanf(" %c",&op);

	switch(op)
		{

	  	case '+' : printf("Addition is:%d \n",num1+num2);
			   break;
	
		case '-' : printf("Subtraction is :%d \n",num1-num2);
			   break;
		
		case '*' : printf("Multiplaction is : %d \n",num1*num2);
			   break;

		case '/' : if(num2==0)
				{
				printf("Number is not divisible by zero .\n");
				
				}
			     else{
				printf("Division is :%.2f: \n",(float)num1/num2);
				
		          	}
				break;

		default:  printf("Invalid input!...Select correct operation.\n");
			
		}


	return 0;
}
