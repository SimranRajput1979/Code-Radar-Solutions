// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0]
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
}