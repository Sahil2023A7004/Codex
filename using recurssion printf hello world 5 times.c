//using recurssion printf hello world 5 times
#include<stdio.h>
void printHelloWorld(int count);
int main()
{
    printHelloWorld(10);
    return 0;
}
//recursive function
void printHelloWorld(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("hello world\n");
    printHelloWorld(count-1);
}