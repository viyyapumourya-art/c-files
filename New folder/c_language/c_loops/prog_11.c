#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i%4==0)
        {
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}