// Your code here...
#include<stdio.h>
int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
            printf("%d",arr[0]);
           return 0;
            
        }
        max=arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]>=max){
            max=arr[i];
         printf("%d ",max);
        }
    }
    printf("%d",arr[n-1]);
}