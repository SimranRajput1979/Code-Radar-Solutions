// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return flag=1;
        }
    }
    if(flag){
        printf("%d",arr[i]);
    }
    else{
    printf("-1");}
    return 0;
}