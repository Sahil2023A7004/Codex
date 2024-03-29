//Array 
#include<stdio.h>
int main()
{
    int marks[3];
    printf("enter phy, chem, math\n");
    scanf("%d%d%d",&marks[0],&marks[1],&marks[2]);
    printf("phy = %d,chem = %d,math = %d",marks[0],marks[1],marks[2]);
    return 0;
}