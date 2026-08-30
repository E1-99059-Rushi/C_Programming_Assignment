#include<stdio.h>

int main()
{ 
	int E_id,D_num;
	char ch;
	

	printf("Enter Employee id :");
	scanf("%d",&E_id);

	printf("Enter Dept no :");
	scanf("%d",&D_num);

	printf("Enter Designation code :");
	scanf(" %c",&ch);

	switch(D_num)
		{
			case 10: if(ch=='M')
				printf("Employee with employee id %d is working in ""Marketing"" department as ""Manager"" .\n",E_id); 
				
				else if(ch=='S')
				printf("Employee with employee id %d is working in ""Marketing"" department as ""Supervisor"" .\n",E_id); 	
				
				else if(ch=='s')
				printf("Employee with employee id %d is working in ""Marketing"" department as ""Securit Officer"" .\n",E_id); 	
				
				else if(ch=='C')
				printf("Employee with employee id %d is working in ""Marketing"" department as ""Clerk"" .\n",E_id); 	
				
				else
				printf("Enter correct Dsgn code.\n");
		
			break;

			
			case 20: if(ch=='M')
				printf("Employee with employee id %d is working in ""Management"" department as ""Manager"" .\n",E_id); 
				
				else if(ch=='S')
				printf("Employee with employee id %d is working in ""Management"" department as ""Supervisor"" .\n",E_id); 	
				
				else if(ch=='s')
				printf("Employee with employee id %d is working in ""Management"" department as ""Securit Officer"" .\n",E_id); 	
				
				else if(ch=='C')
				printf("Employee with employee id %d is working in ""Management"" department as ""Clerk"" .\n",E_id); 	
				
				else
				printf("Enter correct Dsgn code.\n");
		
			break;
			
			
			case 30: if(ch=='M')
				printf("Employee with employee id %d is working in ""Sales"" department as ""Manager"" .\n",E_id); 
				
				else if(ch=='S')
				printf("Employee with employee id %d is working in ""Sales"" department as ""Supervisor"" .\n",E_id); 	
				
				else if(ch=='s')
				printf("Employee with employee id %d is working in ""Sales"" department as ""Securit Officer"" .\n",E_id); 	
				
				else if(ch=='C')
				printf("Employee with employee id %d is working in ""Sales"" department as ""Clerk"" .\n",E_id); 	
				
				else
				printf("Enter correct Dsgn code.\n");
		
			break;

			case 40: if(ch=='M')
				printf("Employee with employee id %d is working in ""Designing"" department as ""Manager"" .\n",E_id); 
				
				else if(ch=='S')
				printf("Employee with employee id %d is working in ""Designing"" department as ""Supervisor"" .\n",E_id); 	
				
				else if(ch=='s')
				printf("Employee with employee id %d is working in ""Designing"" department as ""Securit Officer"" .\n",E_id); 	
				
				else if(ch=='C')
				printf("Employee with employee id %d is working in ""Designing"" department as ""Clerk"" .\n",E_id); 	
				
				else
				printf("Enter correct Dsgn code.\n");
		
			break;
			
			default:printf("Enter correct  Deptno");
		}
	return 0;

}
