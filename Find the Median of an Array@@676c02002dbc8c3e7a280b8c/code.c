// Your code here...
#include<stdio.h>
int bubblesort(intarr[],int n){
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
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int median;
   if(n%2==1){
   median=arr[n/2];
   printf("%d",median);
   }
   else{
    median=(arr[n/2]+arr[(n/2)-1])/2;
    printf("%d",median);
   }
   return 0;
}