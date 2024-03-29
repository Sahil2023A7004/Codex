//
#include<stdio.h>  
int sum(int, int); //function declaration and passing arguments(int , int) are arguments
void main()  
{  
    int a,b,result;   
    printf("\nsum of two numbers");  //function with argument and with return value
    printf("\nEnter two numbers:");  
    scanf("%d %d",&a,&b);  
    result = sum(a,b);  //function defination
    printf("\nThe sum is : %d",result);  
}  
int sum(int a, int b) //function calling 
{  
    return a+b;  //returning value which is a+b
}  