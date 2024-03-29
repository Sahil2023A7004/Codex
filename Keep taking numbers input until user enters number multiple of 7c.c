//Keep taking numbers input until user enters number multiple of 7
#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter n\n");
        scanf("%d",&n);
        printf("%d",n);
        if(n%7==0)
        {
            break;
        }
    }
    while(1);
    printf("Dead End");
    return 0;
}
//this is same as other program Keep taking numbers as inpt from user until used enters an odd number