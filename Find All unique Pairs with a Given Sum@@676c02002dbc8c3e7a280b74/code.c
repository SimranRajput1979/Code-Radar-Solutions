// Your code here...
#include<stdio.h>
// int palindrome(int num){
//     int original=num,reversed=0;
//     while(num>0){
//         int result=num%10;
//         reversed=reversed*10+result;
//         num=num/10;
//     }
//     original==reversed;
// }
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<i;j++){
        if((arr[i]+arr[i+1])==k){
            printf("%d %d",arr[i],arr[i+1]);
        }
    }}
    // return 0;
}