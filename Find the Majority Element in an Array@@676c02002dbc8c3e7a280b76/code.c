// Your code here...
#include<stdio.h>
int majorityelement(int arr[],int n){
    int count=0,candidate=-1;
    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
            count=1;
        }
        else if(arr[i]==candidate){
            count++;
        }
        else{
            count--;
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
    int result=majorityelement(arr,n);
    printf("%d",result);
}