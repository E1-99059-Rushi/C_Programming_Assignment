#include<stdio.h>
#include<stdlib.h>
  int main()
	{
		int num,magic_num;
		int count=1;

		magic_num=rand()%1000;
	do
       	{
		
		printf("--------Guess the magic number--------\n\n");
		
		printf("%d\n\n",magic_num);
		printf("Enter the random magic between 1 to 1000:");
		scanf("%d",&num);
	
		count++;	
	{
		
		if(magic_num==num)
			{
			printf("Congrats!.....\n");
			break;
			}

		else if(magic_num < num )
			printf("**Right**\n");
		
		else
	            printf("**Left**\n");
	}		
   }	
		while(count<=10);

		if(magic_num!=num)
			{
			printf("Sorry! you lost.\n");
		        printf("Magic number was %d \n",magic_num);
			}		
		


	return 0;
}
