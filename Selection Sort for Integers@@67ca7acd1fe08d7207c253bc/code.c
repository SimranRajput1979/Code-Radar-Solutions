// Your code here...
int selectionsort(int arr[],int n,int min){
    for (int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min])
            min=j;
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}