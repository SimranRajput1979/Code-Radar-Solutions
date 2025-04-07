// Your code here...
#include<stdio.h>
int frequencycount(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            continue;
        }
    }
    printf("%d %d",i,count);
}







int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    frequencycount(arr,n);
}