#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,i;
    printf("enter the number of terms\n");
    scanf("%d",&n);
int n3=n1+n2;
printf("Fibonacci series %d,%d",n1,n2);
for(int i=3;i<=n;++i){
    printf("%d",n3);
    n1=n2;
    n2=n3;
    n3=n1+n2;

}
return 0;
}