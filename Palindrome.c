#include<stdio.h>
void main()
{
    int n,c,s=0;
    printf("enter any number");
    scanf("%d",&n);
    c=n;
    while(n>0){
    int r=n%10;
    s=r+(s*10);
    n=n/10;
    }
    if(c==s){
        printf("Palindrome\n");
    }
    else
    {
        printf("Not");
    }
}