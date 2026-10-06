#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;

};
int main()
{
    struct student s1= {1,"salaar",90};
    struct student s2= {2,"santhosh",91};
    
    printf("\n-----student-1 details-----\n",s1.roll);
    printf("\t roll number:%d\n",s1.roll);
    printf("\t name        :%s\n",s1.name);
    printf("\t marks       :%.2f\n",s1.marks);
    printf("\n------stuent-2 details------\n",s2.roll);
    printf("\t roll number:%d\n",s1.roll);
    printf("\t name        :%s\n",s2.name);
    printf("\t marks       :%.2f\n",s2.marks);
    return 0;
   
    
}