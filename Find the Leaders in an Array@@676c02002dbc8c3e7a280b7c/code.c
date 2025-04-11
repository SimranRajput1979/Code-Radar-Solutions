// Your code here...
#include<stdio.h>
int main(){
    int n,max,j;
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
        for (j=i;j<n-1;j++){
            if(arr[i]>max){
                printf("%d",max);
            }
        }
    }
    printf("%d",arr[n-1]);
}