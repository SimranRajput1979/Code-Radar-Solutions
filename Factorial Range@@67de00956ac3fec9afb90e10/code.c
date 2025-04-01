#include <stdio.h>
int fact(int n){
if(n==1 || n==0){
    return 1;
else{
    return n*fact(n-1);
}
}
}
int factorialRange(int start,int end){
    if(start>end){
        printf("Invalid range");
    }
    else if(start<0){
printf("Invalid range");
    }
    else{
        for(int i=start;i<=end;i++){
            f=fact(i);
            printf("%d",f);
        }
    }

}