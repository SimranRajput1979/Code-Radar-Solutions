// Your code here...
#include<stdio.h>    
int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>=arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } 
}
int samelement(int arr[],int n){
    for(int i=0;i<=n;i++){
        if(arr[i]!=arr[i+1]){
            return 0;
            }
        }
        return 1;
        }

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);

    if((n==1)||samelement(arr,n)){
        printf("-1");
        return 0;
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            printf("%d",arr[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
    }


