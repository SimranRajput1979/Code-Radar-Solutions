// Your code here...
#include<stdio.h>
void bubbleSort(int n,int arr[]){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(n,arr);
    printArray(arr,n);
    return 0;
}