#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("original value is%d\n",a);
    a+=3;
    printf("after a+=3 value is%d\n",a);
    a-=2;
    printf("after a-=2 value is%d\n",a);
    a*=3;
    printf("after a*=3 value is%d/n",a);
    a%=5;
    printf("after a%%=5 valure is%d/n",a);
    return 0;
}