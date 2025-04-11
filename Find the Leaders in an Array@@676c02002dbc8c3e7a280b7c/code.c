// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
            printf("%d",arr[0]);
           return 0;
            
        }
        int max=arr[0];
        printf("%d",max);
    for(int i=1;i<n-1;i++){
        if(arr[i]>=max){
         printf("%d ",arr[i]);
         max=arr[i];
          
        }
    }
    // printf("%d",arr[n-1]);
    return 0;

  
    
}