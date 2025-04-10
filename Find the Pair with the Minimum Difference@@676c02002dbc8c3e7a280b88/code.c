// Your code here...
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
   int maximum_difference=abs(arr[1]-arr[0]);
   int x=arr[0],y=arr[1];
   for(int i=0;i<n-1;i++){
    int difference=abs(arr[i+1]-arr[i]);
    if(difference>maximum_difference){
        maximum_difference=difference;
        int x=arr[i];
        int y=arr[i+1];
    }
   }
   printf("%d %d",x,y);
}