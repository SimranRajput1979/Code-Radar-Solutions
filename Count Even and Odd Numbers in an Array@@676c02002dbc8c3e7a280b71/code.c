// Your code here...
#include<stdio.h>
int oddeven(int arr[],int n){
    int count1=0;
    int count2=0;
   for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        count1++;
    }
    else{
        count2++;
    }
   }
   printf("%d %d",count1,count2);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    oddeven(arr,n);

}