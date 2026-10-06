#include<stdio.h>
int main()
{
    int number;
    printf("enter a number");
scanf("%d",&number);
if(number%3 == 0 && number%5 == 0)
{
    printf("%d is divisible by both 3 and 5 \n",number);
}
else
{
    printf("%d is not divisible by boyh 3 and 5 \n",number);
}

}