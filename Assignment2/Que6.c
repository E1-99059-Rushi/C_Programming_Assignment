#include<stdio.h>

int main()
{ 
	int num,temp;
	printf("Enter number:");
	scanf("%d",&num);
	
	temp=(num%10)*10000;
       temp+= ((num/10)%10)*1000;
       temp+= ((num/100)%10)*100;
       temp+= ((num/1000)%10)*10;
       temp+= ((num/10000));
       printf("%d\n",temp);
 	 if(num==temp)
	  printf("%d is a palindrome number.\n",num);
  	
	else
	  printf("%d is not a palindrome number. \n",num);
       
       
       
       

	return 0;
}
