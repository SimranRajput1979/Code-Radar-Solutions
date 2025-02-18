// Your code here...#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for (i=1;i<=10;i++){
        printf("%dx%d=%d ",a,i,a*i);
    }
    return 0;
}