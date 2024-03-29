//function
#include<stdio.h>
void hello();//fn declaration
 int main()//main function
 {
    hello();//fn calling we call fn in main fn 
    return 0;
 }
 void hello()//fn defination actually what fn does
 {
    printf("Hello\n");
 }