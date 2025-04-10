// Your code here...
#include<stdio.h>
int getzerotoright(int arr[],int n){
    int index=0;
    for(int i=0;i<n;i++){
       if(arr[i]!=0){
        arr[index++]=arr[i];
       }
    }
    while(index<n){
        arr[index++]=0;
        return 0;
    }
}
void  printarray(int arr[],int n){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
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
   getzerotoright(arr,n);
    printarray(arr,n);
    return 0;
}