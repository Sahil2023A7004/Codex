//No Return Without Argument Function in C

#include<stdio.h>
//Function Declaration
void add();
int main()
{
    //Function Calling//why is function called early at this point
    add();
    return 0;
}
//Function Definition
void add()
{
    int a,b,c;
    printf("\nEnter The Value of A & B :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal : %d",c);
}