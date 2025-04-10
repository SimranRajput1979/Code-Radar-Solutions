// Your code here...
#include<stdio.h>
int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void  reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
            int temp=start;
            start=end;
            end=temp;
            start++;
            end--;
    }
    int printarray(int arr[],int n){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);

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
    reverse(arr,n);
    printarray(arr,n);
    return 0;
}