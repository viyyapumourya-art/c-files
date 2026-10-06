#include <stdio.h>
int main(){
    char name [20];
    float cgpa;
    char grade;
    printf("enter your name,cgpa and grade:");
    scanf("%s %f %c",&name,&cgpa,&grade);
    printf("name: %s\n",name);
    printf("cgpa: %.2f\n",cgpa);
    printf("grade: %c\n",grade);
    return 0;
}