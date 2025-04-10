// Your code here...
#include<stdio.h>
int sumofdigit(int num){
    int sum=0;
    if(num<0) num=-num;
    while(num>0){
        sum+=num%10;
        num=num/10;
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
    for(int i=0;i<n;i++){
        arr[i]=sumofdigit(arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

  

}