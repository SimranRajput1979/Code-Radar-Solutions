// Your code here...
#include<stdio.h>
int main(){
    int n,space;
    for(int i=1;i<=n;i++){
        for(space=1;space<=i;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}