#include<stdio.h>
#include<string.h>

int stricmp(const char *s1, const char *s2)
{
    while (*s1 && *s2)
    {
        char c1 = *s1;
        char c2 = *s2;

        if (c1 >= 'A' && c1 <= 'Z')
            c1 = c1 + 32;

        if (c2 >= 'A' && c2 <= 'Z')
            c2 = c2 + 32;

        if (c1 != c2)
            return c1 - c2;

        s1++;
        s2++;
    }

    return *s1 - *s2;
}
char *strrev(char * str)
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

int main()
{
	char str1[100]="Hello";
	char str2[100]="DESD";
	char str3[100]="Hello DESD";
	char temp[100];
	char *ptr;

	printf("strlen() : %u",strlen(str1));
	
	strcpy(temp,str1);
	printf("strcpy() : %s\n",temp);

	strcat(str1,str2);
	printf("strcat() : %s\n",str1);

	printf("strcmp() : %d\n",strcmp("Hello","DESD"));

	printf("stricmp() : %d\n",stricmp("Hello", "hello"));

	strcpy(temp, str1);
	printf("strrev() : %s\n", strrev(temp));


	ptr = strchr(str3,'D');
	if(ptr !=NULL)
		printf("strchr() : found : %s\n",ptr);

	ptr = strstr(str3,"DESD");
	if(ptr != NULL)
		printf("strstr() : found : %s\n",ptr);
	
	strncpy(temp,str3,5);
	temp[5] ='\0';
	printf("strncpy(): %s\n",temp);

	strcpy(temp,"hello ");
	strncat(temp,"DESD!!",5);
	printf("strncat() : %s\n",temp);

	printf("strncmp() : %d\n",strncmp("Hello","Help" ,3));

	char str[] = "DESD,DBDA,DAC,DITIS,DMC";
	char *pt = strtok(str,",");

	printf("pt : %s\n",pt);

	return 0;
}
