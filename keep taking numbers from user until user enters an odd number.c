//keep taking numbers from user until user enters an odd number
//we prefer do while loop in these kind of situations
#include<stdio.h>
int main()
{
    int n;
do{
    printf("enter n\n");
    scanf("%d",&n);
    printf("%d\n",n);
    if(n%2 !=0){
        break;
    }
}
while(1);
printf("Game Over\n");
return 0;
}
/*Program Explained
in this question we have to take input from user and print it until user enters an odd number
so used a do while loop to do this we gave instructions to compiler take input from user then 
using an if and break statement(i used if for understanding purposes)
and instructed compiler print game over when user enter odd number which was done by n%2 !=0
which says that when n divided by 2 is not equal to zero print game over*/