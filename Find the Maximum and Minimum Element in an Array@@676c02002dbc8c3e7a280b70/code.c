// Your code here...

#include<stdio.h>
#include<string.h>

int  bubblesort(int arr[],int n){
    int i;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        // printf("%d",arr[i]);
      
    }
    printf("%d %d",arr[i],arr[n-1]);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);  
    }
     bubblesort(arr,n);  
}