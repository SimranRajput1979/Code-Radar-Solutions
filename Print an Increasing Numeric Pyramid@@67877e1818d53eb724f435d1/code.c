#include<stdio.h>
int main(){
    int n,space;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (space=1;space<=n-1;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}