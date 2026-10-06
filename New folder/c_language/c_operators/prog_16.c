#include<stdio.h>
int main()
{
    int pin;
    float balance=1000;
    float amount;
    printf("enter pin");
    scanf("%d",&pin);
    if (pin=4967)
    {
        printf("enter withdral amount");
        scanf("%d",&amount);
        if(amount<=balance)
        {
          printf("transaction successful\n");
          printf("please collect your cash\n");
          printf("remaining balance == %.2f\n", balance - amount);
        }
        else
      {
         printf("insufficient balance\n");
      }
    }
     else
  {
     printf("invalid pin");
  }
  return 0;
}
