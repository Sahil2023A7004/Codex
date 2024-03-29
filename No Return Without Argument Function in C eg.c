//No Return Without Argument Function in C
#include<stdio.h>
//Function Declaration
void add();
void add()
{
    int a,b,c;
    printf("\nEnter The Value of A & B :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal : %d",c);
}
int main()
{
    //Function Calling//why is function called early at this point
    add();
    add();
    printf("Everythig is fine today so why so sad\n");
    return 0;
}
//Function Definition
