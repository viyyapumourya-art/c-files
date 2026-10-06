#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("student.txt","w");
    if (fp == NULL)
    {
        printf("unable to create file.\n");
        return 1 ;

    }
    fprintf(fp,
        "today is the last date of c programming!\n"
        "i learned and understand c during these 12 days.\n"
        "now,i should practice more problemns in c"
        "to become expert.\n"

    );
    fclose(fp);
    printf("data written successfully.\n");
    return 0;

}