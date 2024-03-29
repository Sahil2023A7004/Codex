//write a fn to cal sum product and avg of 2 numbs,print avg in main fn
#include<stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg);
int main()
{
    int a=3 , b = 5;
    int sum,avg,prod;
    dowork(a,b,&sum,&prod,&avg);//& used becoz we have taken pointers and call by refence is used
    printf("sum=%d,prod=%d,%d=avg",sum,prod,avg);
    return 0;
}
void dowork(int a, int b, int *sum, int *prod, int *avg)
{
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}



