#include <stdio.h>
int main()
{
    int attendence;
    printf("enter your attendence percentage");
    scanf("%d",&attendence);
    if(attendence >= 90)
    {
        printf("excellent attendence\n");

    }
    else if(attendence >= 75)
    {
    printf("good attendence\n");
    }
    else if(attendence >= 65)
    {
    printf("average attendence. prepare for condition fees. \n");


    }
    else
    {
        printf("you may be detained. meet the hod immedately. \n");

    

    }
    return 0;
}
