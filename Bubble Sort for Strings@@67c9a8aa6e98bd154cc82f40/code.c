// Your code here...
void bubblesort(char arr[],int n){
    for(int i=0;i<n-1í++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

}
void printArray(char arr[],int n){
    printf("%s",arr[i]);
}