# include<stdio.h>
struct student 
{
    int roll;
    char name[50];
    float marks;

};
int main()
{
    struct student s;
    printf("enter roll number");
    scanf("%d",&s.roll);;
    getchar();
    printf("enter name:");
    fgets(s.name,sizeof(s.name),stdin);
    printf("enter marks:");
    scanf("%f",&s.marks);
   printf("\n-----student details-----\n");
    printf("\t roll number:%d\n",s.roll);
    printf("\t name        :%s\n",s.name);
    printf("\t marks       :%s\n",s.name);
    printf("\t marks       :%.2f\n",s.marks); 
    return 0;
}