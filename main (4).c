/******************************************************************************

                            Online C Compiler.
printf("\n var=%d",var);                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
main()
{
    int a,b;
    char ch;
    printf("enter two valiues:");
    scanf("%d%d",&a,&b);
    printf("enter  value of operator:");
    fflush(stdin);
    scanf("%c",&ch);
    
    switch(ch)
    {
        case '+':printf("sum :%d",a+b);break;
        case '-':printf("difference:%d",a-b);
        default:printf("invalid choice...!");
        
    }
}
