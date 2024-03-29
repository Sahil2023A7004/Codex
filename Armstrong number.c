#include<stdio.h>
int main()
{
    int n,arm=0,c,r;
    printf("enter any number\n");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){printf("Armstrong\n");}
    else{printf("Nhi hai\n");}
    return 0;

}