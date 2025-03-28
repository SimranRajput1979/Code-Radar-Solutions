// Your code here...
void selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            min=j;
        }
        char temp;
        strcyp temp=arr[min];
        strcyparr[min]=arr[i];
        strcyp arr[i]=temp;
    }
}
void printArray(char arr[n],int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}