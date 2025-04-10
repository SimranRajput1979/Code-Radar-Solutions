// Your code here...
#include<stdio.h>
int monotonic(int arr[],int n){
    int increasing=1;
    int decreasing=1;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            increasing=0;
        }
        if(arr[i]>arr[i+1]){
            decreasing=0;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    monotonic(arr,n);
    if(monotonic(arr,n)){
        printf("YES");
        }
        else{
            printf("NO");
        }
        return 0;
    }
