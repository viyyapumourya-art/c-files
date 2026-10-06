#include <stdio.h>//importing std input outpuit liberay f;
int main() {
    char name_1[20];//declaring nae variable
    char name_2[20];
    printf("hello,good morning:\n");
    printf("enter your name:");
    scanf("%s ",&name_1);//take input from user and assign to name variable
    printf("enter your friend names:");
    scanf("%s",&name_2);
    printf("hey %s.\n your friend's name is %s.\nboth%s  and %s are best friends",name_1,name_2);
    return 0;
}
