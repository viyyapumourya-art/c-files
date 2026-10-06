#include <stdio.h>
int main()
{
    int a;
    printf("%d",&a);
    scanf("%d",&a);
    printf("original value = %d\n",a);
    a++;
    printf("after first increment = %d\n",a);
    a++;
    printf("after second increment = %c\n",a);
    return 0;

}