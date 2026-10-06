#include <stdio.h> // importing std input output library
int main() {
    int age ;//declaring name variable
    char name[309];//declaring name variable

    printf("hello,good morning!\n");
    printf("enter your name :");
    scanf("%s",&name);//take input from user and assign to name variable
    printf("enter  your age: ");
    scanf("%d",&age);
    printf("thank you %s.\n your age is %d;.\nyou are awesome.",name,age);
    return 0;
} 
