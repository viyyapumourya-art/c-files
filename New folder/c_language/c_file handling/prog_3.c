#include <stdio.h>
int main()
{
    FILE *fp;
    char name[30];
    float marks;
    fp = fopen("student_marks_data.txt","w");
    if(fp ==  NULL)
    {
        printf("unable to open file.\n");
        return 1;
    }
    printf("enter roll number");
    scanf("%d",&roll);
    getchar();
    printf("enter name:");
    fgets(name,sizeof(name),stdin);
    printf("enter marks:");
    scanf("%f",&marks)
}