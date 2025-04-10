// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=0;
    for(int i=0;i<n;i++){
        int repeate=0;
        for(int j=0;j<i+1;j++){
            if(arr[i]==arr[j]){
                found=1;
                repeate++;

            }
        }
        if(found==1){
                printf("%d",arr[i]);
                return 0;
        }
    }
    printf("-1");
    return 0;
}