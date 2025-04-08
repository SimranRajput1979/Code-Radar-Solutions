// Your code here...
#include<stdio.h>
int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]>arr[j]){
                printf("Sorted");
                break;
            //     int temp;
            //     temp=arr[j];
            //     arr[j]=arr[j+1];
            //     arr[j+1]=temp;
            // 
            }
            else{
                printf("Not Sorted");
            }
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
    bubblesort(arr,n);
    // if(bubblesort==arr[n]){
    //     printf("Sorted");
    // }
    // else{
    //     printf("Not Sorted");
    // }
}