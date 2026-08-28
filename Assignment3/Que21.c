#include<stdio.h>

  int main()
	{
		int start;
		printf("Enter number:");
		scanf("%d",&start);

		int num=start+1;
		int count=1;
	do
	  {
			int flag=1;
         	for(int i=2;i<num;i++)
		     {  
			if(num % i == 0)
				{
			       	   flag=0;
				   break;
				}
	             }
			if(flag==1)
				{
				  printf("%d \n",num);
				  count++;
		               }	
        		    num++;
			
	}
	while(count<=5);
		


	return 0;
	}
