#include<stdio.h>
int main()
{
    int n;
    int i=1;
    int sum=0;
    printf("enter n :");
    scanf("%d",&n);
    while(i <= n )
    {
        sum = sum + i;
        i++;

    }
    printf("sum of 1st %d natural number is : %d",n,sum);
    return 0;
}