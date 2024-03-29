//function without argument with return value
#include<stdio.h>
int takenumber()//function declaration
{
    int i;
    printf("enter number\n");
    scanf("%d",&i);
    printf("the number is %d",i);
    return i;//return value
}
int main()
{
   
    takenumber();//function calling
    return 0;
}
/*the same can be done by 
#include<stdio.h>
int takenumber()//function declaration
{
    int i;
    printf("enter number\n");
    scanf("%d",&i);
    return i;//return value
}
int main()
{
   int c;
    c = takenumber();//function calling
    printf("the number is %d",c);
    return 0;
}
we just stored the value of called funtion in another variable c*/