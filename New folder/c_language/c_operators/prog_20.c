#include <stdio.h>
int main()
{
    int pin;
    float balance = 500;
    float amount;
    printf("enter pin:");
    scanf("%d",&pin);
    if(pin == 1234)
    {
        printf("enter withdrawl amount:");
        scanf("%f",&amount);
        if(amount <= balance)
        {
            printf("transation successful\n");
            printf("piease collect your cash\n");
            printf("remaining balance = %.2f\n",balance - amount);
        

        }
        else
        {
            printf("insufficient balance\n");
        
        }
    }
    else
    {
        printf("invalid pin\n");

    }
    return 0;
    }
