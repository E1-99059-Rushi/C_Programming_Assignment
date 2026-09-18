#include<stdio.h>
#include<string.h>


 int main()
   
  {  
      //strlen()
      
     char str[20]="Ashish munna ";

 	int x=strlen(str);

	printf("length of str:%d\n",x);
	
	printf("\n");
/*
	//stricmp()
       
       char str1[20]="ashish";
	char str2[20]="ashish";

          int y=stricmp(str1,str2);
	 
	if(y==0){
	printf("str1 and str2 is same..\n ");
	}
	else
	printf("not same...\n");

*/
           //strncpy
          
       char str1[20]="ashish";
	char str2[20]="ashiSH";

          int y=strncmp(str1,str2,5);
	 
	if(y==0){
	printf("str1 and str2 some length is same..\n ");
	}
	else
	printf("string is  not same...\n");
  
	printf("\n");
	 
      //strcpy

 	char str3[20]="munna ";

        char str4[20]="Yadav";
      
	printf("str[3]:%s\n str[4]:%s\n",str3,str4);           

	strcpy(str3,str4);

	printf("new str3:%s\n",str3);
	
    
	printf("\n");
/*
     //strrev

     char rev[]="Ashish Kumar Munna";
           printf("my str is:%s\n",rev);      
	strrev(rev);
   
 	printf("my reverse string is:%s\n",rev);
 
*/
	//strncat()
     char str6[]="Ashish kumar munna ";
       
	char str7[]="Sunbeam in ESD";
    
     printf("str6:%s\n str7: %s\n",str6,str7);
    
	printf("\n");

    	strncat(str6,str7,6);

      printf("cat string is:%s\n",str6);


	printf("\n");



	//strcat()
     char str8[]="Ashish kumar munna ";
       
	char str9[]="Sunbeam in ESD";
    
     printf("str8:%s\n str9: %s\n",str8,str9);
    
	printf("\n");

    	strcat(str8,str9);

      printf("strcat string is:%s\n",str8);


	printf("\n");

//strchr

     char str15 []="Ashish kumar munna ";
       
	char str16='s';
            char *target;
 
	     target=strchr(str15,str16);

       if(target !=null){
	
	int index=target-str15;

	
	}
	

	printf("\n");








     return 0  }
