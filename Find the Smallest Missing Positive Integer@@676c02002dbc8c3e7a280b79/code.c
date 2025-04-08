// Your code here...
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n+1;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if (arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d",i);
            break;
        }
    }
    return 0;
}