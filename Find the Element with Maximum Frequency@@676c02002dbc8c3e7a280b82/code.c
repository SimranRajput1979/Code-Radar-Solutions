// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max_element=arr[0];
    int max_frequency=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }}
        if(count>max_frequency){
        max_frequency=count;
        max_element=arr[i];
    }
    }
   
    printf("%d ",max_element);
    return 0;
    // printf("%d",max_frequency);
}