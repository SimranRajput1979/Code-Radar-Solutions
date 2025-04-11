// Your code here...
#include<stdio.h>
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
        for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==k){
                int alreadyprinted=0;
                for(int m=0;m<i;m++){
                    for(int n=m+1;n<j;n++){
                        if((arr[m]==arr[i] && arr[n]==arr[j]) || (arr[m]==arr[j] && arr[n]==arr[i])){
                            alreadyprinted=1;
                            break;
                        }
                    }
                    if(alreadyprinted)break;
                }
                if(!alreadyprinted){
                    printf("%d %d\n",arr[i],arr[j]);
                }
        }
    } 
}
return 0;
}