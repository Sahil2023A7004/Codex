#include<stdio.h>
int main()
//Keep taking numbers as inpt from user until used enters an odd number
{
    int a;
    do{
    printf("enter number");
    scanf("%d",&a);
    printf("%d\n",a);
    if(a%2 != 0)
    {
        break;
        }
    }while(1);
    printf("done");
    return 0;
}
/*We used do while loop in this case and as we instructed compiler to take data from user until user enters odd number
we provided this condition by if(a%2!=0) then break the loop and print done and if this condition does not come true 
then keep taking the data from user which was ensured by while(1). (1) means if value returns true. */