#include<stdio.h>

 int main()
{

/*
	
	for (int i=1;i<=5;i++)
		{
		  for(int j=1;j<=i;j++)
			{
				printf("* ");
			}
		printf("\n");
	}
*/


/*

	
	for (int i=1;i<=5;i++)
		{
		  for(int j=5-i+1;j>=1;j--)
			{
				printf("* ");
			}
		printf("\n");
	}

*/


/*
	
	for (int i=1;i<=5;i++)
		{
		  for(int j=1;j<=6-i;j++)
			{
				printf("* ");
			}
		printf("\n");
 		}

*/


/*	
	for (int i=1;i<=5;i++)
		{
		  for(int j=1;j<=i;j++)
			{
				printf("%d ",j);
			}
		printf("\n");
	}


*/

/*
	for (int i=1;i<=5;i++)
		{
		  for(int j=5;j>=6-i;j--)
			{
				printf("%d ",j);
			}
		printf("\n");
	}
*/

/*
for(int i = 1; i <= 7; i++)
    {
        for(int j = 1; j <= 13; j++)
        {
            if(j < 7 - (i <= 4 ? i - 1 : 7 - i) ||
               j > 7 + (i <= 4 ? i - 1 : 7 - i))
            {
                printf("  ");
            }
            else
            {
                if(j <= 7)
                    printf("%c ", 'G' - (7 - j));
                else
                    printf("%c ", 'G' - (j - 7));
            }
        }

        printf("\n");
    }
*/	

/*
	char ch='A';
	for (int i=1;i<=4;i++)
		{
		  for(int j=1;j<=i;j++)
			{
				printf("%c  ",ch);
				ch++;
			}
		printf("\n");
	}

*/
	
	
	for (int i=1;i<=4;i++)
		{
		  
		char ch='A'+i-1;
		for(int j=1;j<=5-i;j++)
			{
				printf("%c ",ch);
				ch++;
			}
		printf("\n");
		ch++;
	}
return 0;
}

