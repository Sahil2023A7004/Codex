//calculate the sum of all numbers from 5 to 50 including 5 and 50
#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i=5;i<=50;i++)
    {
        sum += i;// everytime we add  the value of i in sum with every increse in i
    }
    printf("sum is %d",sum);
    return 0;
}