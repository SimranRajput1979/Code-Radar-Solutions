// Your code here...
#include<stdio.h>
int main(){
    int n,space,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}