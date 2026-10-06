#include <stdio.h>
int main()
{
    int choice;
    printf("===== restaurant menu =====\n");
    printf("1. dum biryani (non-veg)\n");
    printf("2. fry biriyani (non-veg)\n");
    printf("3. vegatable briyani (veg)\n");
    printf("4. paneer biriyani (veg)\n");
    printf("\n enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("you ordered dum biriyani (non-veg) .\n");
        break;
        case 2:
        printf("you ordered fry biriyani (non -veg) .\n");
        break;
        case 3:
        printf("you odered vegatable biriyani (veg) .\n");
        break;
        case 4:
        printf("you ordered paneer biriyani (veg) .\n");
        break;
        default:
        printf("invalid choice\n");
    }
    return 0;

}