//Continue statement example
#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==6)
        {
            continue;//continue will skip 6
        }
        printf("%d\n",i);
    }
    return 0;
}