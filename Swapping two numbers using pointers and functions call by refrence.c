//Swapping two numbers using pointers and functions call by refrence
#include<stdio.h>
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
   int x,y;
   printf("enter two numbers\n");
   scanf("%d%d",&x,&y);
   swap(&x,&y);
   printf("%d %d",x,y);
    return 0;
}