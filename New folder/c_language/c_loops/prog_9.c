#include<stdio.h>
int main()
{
    int r;
    for(r=1;r<=10;r++)
    {
        if(r==6)
        {
            continue;
        }
        printf("%d\n",r);
    }
    printf("thank you\n");
    return 0;
}
