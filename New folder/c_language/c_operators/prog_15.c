 #include <stdio.h>
 int main(){
    int marks ;
    printf("enter your marks:");
    scanf("%d",&marks);
    if (marks<0 ||marks > 100){
        printf("invalid marks.enter correct marks.\n");

    }
    else if (marks>=90){
        printf("grade = A\n");

    
    }
    else if (marks>=80){
        PRINTF("GRADE = B\N");
    
    
    }
    else if(marks>=70){
        printf("grade = c\n");
    
    }
    else if(marks>=60){
        printf("grade = d\n");
    }
    else if(marks>=50){
         printf("grade =f\n");
    }
return 0;