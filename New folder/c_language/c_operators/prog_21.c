#include <stdio.h>
#include <string.h>
int main()
{
    char username [20];
    char password [20];
    printf("enter username");
    printf("%s",username);
    if(strcmp(username,"student") == 0)
    {
        printf("enter password:");
        scanf("%s",password);
        if(strcmp(password,"12345") == 0)
        {
            printf("login successfully\n");
    
        }
        else
        {
            printf("incorrect password\n");

        }
    }
        else
        {
            printf("invalid user name\n");

        }
        return 0;
    
}
