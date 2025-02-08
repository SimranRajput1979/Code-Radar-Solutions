#include <stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if (marks>=90){
        printf("A");
    }
    else if ((marks<90) &&(marks>=80)){
        printf("B");
    }
    else if ((marks<80)&&(marks>=70)){
        printf("C");
    }
    else{
        printf("F");
    }
    return 0;
}
