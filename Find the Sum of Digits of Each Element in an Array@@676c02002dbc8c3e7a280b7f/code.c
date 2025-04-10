// Your code here...
#include<stdio.h>
int sumofdigit(int arr[],int n){
    int sum=0;
    if(num<0) num=-num;
    while(num>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sumofdigit(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}