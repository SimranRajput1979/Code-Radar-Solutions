// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            printf(" ");
        }
        for (int i=1;i<=n;i++){
            printf("*")
        }
        printf("\n");
    }
    return 0;
}