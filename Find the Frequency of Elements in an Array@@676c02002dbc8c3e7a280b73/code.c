// Your code here...
#include<stdio.h>
int frequencycount(int arr[],int n){
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if (visited[i]==1){
            continue;
        }
    }
    int count=0;
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-1]){
            count++;
        }
        else{
            continue;
        }
    }
    printf("%d %d",arr[i],count);
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