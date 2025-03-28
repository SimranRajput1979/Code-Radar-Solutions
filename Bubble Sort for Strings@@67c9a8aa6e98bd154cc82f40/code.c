// Your code here...
void bubbleSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                char temp;
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }

}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
    printf("%c",arr[i]);}
}