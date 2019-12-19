/******************************************************************************

                            Online C Compiler.
printf("\n var=%d",var);                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if ((year%4==0&&year%100!=0)|| year%400==0)
    printf("leap year");
     else 
     printf("not a leap year");
}