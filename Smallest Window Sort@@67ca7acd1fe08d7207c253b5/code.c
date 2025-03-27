#include<stdio.h>
int findUnsortedSubarray(int arr[],int n){
    int count=0;
    (int i=0;i<n;i++){
        if(i>i+1){
            count++;

        }
        else{
            continue;
        }

    }
    printf("%d",count);
}