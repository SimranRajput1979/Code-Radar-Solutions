// Your code here...
#include<stdio.h>
int palindrome(int num){
    int original=num,reversed=0;
    while(num>0){
        int number=num%10;
        reversed=reversed*10+number;
    }
    return original==reversed;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(palindrome(arr[i])){
            count++;
        }
    }
     printf("%d",count);
     return 0;

}