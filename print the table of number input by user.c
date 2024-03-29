//print the table of number input by user
#include<stdio.h>
int main()
{
    int n,m;
    printf("enter n,m\n");
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        printf("%d\n",n*i);
    }
    return 0;
}
/*Program Explained
we take values n and m by user. Loop will work and as we have set n from 1 to m
so loop will run from i = 1 to m and multiply as we commended in printf function*/ 