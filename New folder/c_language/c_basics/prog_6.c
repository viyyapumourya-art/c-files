#include<stdio.h>
int main(){
    char name[10];
    printf("hello,good morning!\n");
    printf("enter your name:");
    scanf("%s",&name);//notice the format specifier for string (%S)
    printf("thank you %s\n your are awesome",name);
    return 0;
}

 