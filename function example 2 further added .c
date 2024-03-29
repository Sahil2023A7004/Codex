//function example 2 further added 
#include<stdio.h>
void sum()//decleared function
{
    int a,b,sum;//taking user input 
    printf("enter a,b\n");
    scanf("%d%d",&a,&b);
    sum = a+b;
    int m;//using this variable in for loop to print output number of times user wants
    printf("enter m\n");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)//used for loop to print sum 5 times
    {
        printf("%d\n",sum);
    }
    if(sum%2==0)//used if else to check for even or odd
    {
        printf("even\n");
    }
    else if(sum%2!=0)
    {
        printf("odd\n");
    }
    else {
        printf("invaild choice\n");
    }
}
void main()
{
    sum();//function calling
    sum();
    printf("sahil\n");
}
//the function is without argumnt and without return type