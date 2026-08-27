#include <stdio.h>
#include<limits.h>
#include<float.h>
int main(){


        printf("Data type %8s Size %2s Format Specifier %2s Range %5s\n", " ", " ", " ", " ");

        printf("%-20s %-6lu %5s %%c %8s %d to %d %5s\n", "char ",sizeof(char), " ", " ",SCHAR_MIN,SCHAR_MAX, " ");
        printf("%-20s %-6lu %5s %%u %8s %u to %u %5s\n", "unsigned char ",sizeof(unsigned char), " ", " ",0,UCHAR_MAX, " ");
        printf("%-20s %-6lu %5s %%hd %8s %hd to %hd %5s\n", "short int ",sizeof(short int), " ", " ",SHRT_MIN,SHRT_MAX, " ");
        printf("%-20s %-6lu %5s %%hu %8s %hu to %hu %5s\n", "unsigned short int ",sizeof(unsigned short int), " ", " ",0,USHRT_MAX, " ");
        printf("%-20s %-6lu %5s %%d %8s %d to %d %5s\n", "int ",sizeof(int), " ", " ",INT_MIN, INT_MAX, " ");
        printf("%-20s %-6lu %5s %%u %8s %u to %u %5s\n", "unsigned int ",sizeof(unsigned int), " ", " ", 0, UINT_MAX, " ");
        printf("%-20s %-6lu %5s %%ld %8s %ld to %ld %5s\n", "Long int ",sizeof(long int), " ", " ",LONG_MIN,LONG_MAX, " ");
        printf("%-20s %-6lu %5s %%lu %8s %d to %ld %5s\n", "unsigned long int ",sizeof(unsigned long int), " ", " ",0,ULONG_MAX, " ");
        printf("%-20s %-6lu  %5s %%f  %8s %e to %e\n ","float",sizeof(float)," "," ",FLT_MIN,FLT_MAX);
        printf("%-20s %-6lu %5s %%lf %8s  %e to %e \n","Double",sizeof(double)," "," ",DBL_MIN,DBL_MAX);
        printf("%-20s %-6lu %5s %%lf %8s  %Le to %Le\n "," long Double",sizeof(long double)," "," ",LDBL_MIN,LDBL_MAX);

  return 0 ;
}
