#include <stdio.h>
int main(){
    int a,i,isprime=0;
    scanf("%d",&a);
    for (i=2;i<=a-1,i++){
        if (a%i==0){
        isprime=1;
        break;
        }
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;




}