#include<stdio.h>
#include<string.h>

size_t my_strlen(char *str1)
{
	int i;
	for(i = 0; str1[i] != '\0'; i++)
	{
	}
	return i;


}

char *my_strcpy(char *str2,char *str1)
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	return str2;
}

char *my_strcat(char *str1,char *str2)
{
	int i,j;
	for(i=0;str1[i]!='\0';i++)
	{
	}
	for(j=0;str2[j]!='\0';j++)
	{
		str1[i+j]=str[j];
	}
	str1[i+j]= '\0';
	return str1;
}

int my_strcmp(char *str1,char *str2)
{
	for(int i=0;str1[i]!='\0' || str2[i]!='\0';i++)
	{	int diff=str1[i]-str2[i];
		if(diff!=0)
		{
			return diff;
		}	
	}
	return 0;
}

int my_stricmp(const char *str1, const char *str2)
{
    while (*str1 && *str2)
    {
        char c1 = *str1;
        char c2 = *str2;

        if (c1 >= 'A' && c1 <= 'Z')
            c1 = c1 + 32;

        if (c2 >= 'A' && c2 <= 'Z')
            c2 = c2 + 32;

        if (c1 != c2)
            return c1 - c2;

        str1++;
        str2++;
    }

    return *str1 - *str2;
}

char *my_strrev(char * str)
{
	int i = 0;
	int j = strlen(str) - 1;
	while(i<j)
	{
		int temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		++i, --j;
	}
	return str;
}

char *my_strchr(char *str1, char key)
{
	int i;
	for(i = 0; str1[i] != '\0'; i++)
	{

		if(str1[i] == key)
		{
			return &str1[i];
		}
	}
	return NULL;
}

char* my_strstr(char *orig, char *sub)
{
	int len = strlen(sub);
	int i;

	for(i = 0; orig[i] != '\0'; i++)
	{
		if(strncmp(orig + i,sub,len)==0)
		{
			return orig+i;
		}
	}
	return NULL;
}


int main()
{
	char str1[100], str2[100],result[200];
	char ch;
	char *ptr;

	printf("Enter first string:");
	scanf("%[^\n]",str1);

	printf("length = %u\n",my_strlen(str1));
	my_strcpy(result,str1);
	printf("\nstrcpy = %s\n",result);
	
	printf("\nEnter second string:");
	scanf("%[^\n]", str2);

	my_strcpy(result,str1);
	my_strcat(result,str2);

	printf("strcat = %s\n",result);

	printf("\nstrcmp = %d\n",my_strcmp(str1,str2));

	printf("stricmp = %d\n",my_stricmp(str1,str2));

	my_strcpy(result,str1);
	my_strrev(result);
	printf("strrev = %s\n",result);

	printf("\nEnter character to search:");
	scanf("%c",&ch);

	ptr = my_strchr(str1,ch);
	if(ptr!=NULL)
		printf("character found at %ld\n",ptr-str1);
	else
		printf("character not found\n");
	
	printf("\nEnter substring to search:");
	scanf("%[^\n]",str2);

	ptr = my_strstr(str1,str2);
	if(ptr!=NULL)
		printf("substring found at %ld\n",ptr-str1);
	else
		printf("substring not found\n");
		
	return 0;
}
