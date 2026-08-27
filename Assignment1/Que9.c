#include<stdio.h>

 int main()
   {
      float cel,fah;
     printf("Enter the Fahrenheit to convert into the celsius:");
     scanf("%f",&fah);

     cel=(fah-32)*5/9;
     printf("The %.2f fahrenheit is equal to %.2f celsius\n",fah,cel);
     
     printf("Enter the celsius to convert into  Fahrenheit:");
     scanf("%f",&cel);

     fah=cel*9/5+32;
     printf("The %.2f fahrenheit is equal to %.2f celsius\n",cel,fah);
      return 0;
  }
