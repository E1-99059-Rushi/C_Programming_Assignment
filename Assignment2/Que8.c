#include<stdio.h>

int main()

{	
	 int Quant;
	float price;
 	printf("Enter Quantity:");
	scanf("%d",&Quant);

	if(Quant>=30 && Quant<50)
	{	
		price=Quant*5*0.9;
		printf("Price of %d quantity is:%.2f \n",Quant,price);
	}
	else if( Quant >=50)
	{	
		price=Quant*5*0.85;
		printf("Price of %d quantit is:%.2f \n",Quant,price);
	}
	else{
		printf("Discount is zero");
 		}

	return 0;
}
