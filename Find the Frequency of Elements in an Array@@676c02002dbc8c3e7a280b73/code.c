// Your code here...
#include<stdio.h>
int frequencycount(int arr[],int n){
    int visited[n];
    int i;
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if (visited[i]==1){
            continue;
        }
    }
    int count=1;
    // int i;
    for(int j=i+1;i<n;j++){
        if(arr[i]==arr[j]){
            count++;
            visited[j]=1;
        }
    }
    printf("%d %d\n",arr[i],count);
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