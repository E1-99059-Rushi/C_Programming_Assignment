#include<stdio.h>

  int main()
	{
	int num1,num2,choice;
	printf("Enter Number 1:");
	scanf("%d",&num1);

	printf("Enter Number 2:");
	scanf("%d",&num2);
	
	do 
	{
		printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division\n 5.Exit\n");
		printf("\n Select the operation:");
		scanf("%d",&choice);
	
		switch(choice)
			{
				case 1:printf("Addition is:%d \n",num1 + num2);
				        break;
				
				case 2:printf("Subtraction is:%d \n",num1 - num2);
			                break;
				
				case 3:printf("Multiplication is:%d \n",num1 * num2);
					break;

				case 4:if(num2!=0)
					  {
						printf("Division is:%d \n",num1 / num2);
						break;
				           }
					else{
						printf("Number not Divisible by zero\n");
			                 	break;
						}
				case 5:printf("Exist successfull.\n");
					break;

				default:printf("Select correct Operation.\n");
					break;
			}

	}
		while(choice!=5);
	return 0;
	}
