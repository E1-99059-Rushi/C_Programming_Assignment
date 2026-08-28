#include<stdio.h>

  int main()
	{
	int base,index;
	int res=1;
	
	printf("Enter Base:");
	scanf("%d",&base);

	printf("Enter Index:");
	scanf("%d",&index);

	for(int i=1;i<=index;i++)
	 {
  	   res=res*base;
	}
	
	printf("Output:%d \n",res);



	return 0;
	}
