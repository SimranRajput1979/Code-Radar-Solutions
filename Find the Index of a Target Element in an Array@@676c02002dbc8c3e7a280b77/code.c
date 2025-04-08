// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(arr[i]=k){
            printf("%d",arr[i]);
        }
        else{
            printf("-1");
        }
    }
    return 0;
}