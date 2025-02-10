#include <stdio.h>
int main(){
    int a,i,isPrime=1;
    scanf("%d",&a);
    for (i=2;i<=a/2,i++){
        if (a%i==0){
        isPrime=0;
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