//using recurssion find factorial
#include<stdio.h>
int fact(int n);
int main()
{
    printf("%d is factorial",fact(5));
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;
}