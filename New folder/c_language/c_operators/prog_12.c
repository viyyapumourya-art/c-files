#include<stdio.h>
int main()
{
    double number;
    printf("enter a number");
    scanf("%lf",&number);
    if (number > 0)
    {
    printf("the entered number is possitive");
    }
    else if(number < 0)
    {
        printf("the entered is negative");
    }
    else 
    {
        printf("the enetered number is zero");
    }
    return 0;
}
