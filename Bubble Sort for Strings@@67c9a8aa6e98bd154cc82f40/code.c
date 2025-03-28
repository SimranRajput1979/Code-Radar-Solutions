// Your code here...
#include<string.h>
void bubblesort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(arr[j],arr[j+1])>0){
                swap(int arr[][100],int j,int j+1)
            }
        }
    }

}
void swap(char arr[][00],int i,int j){
     char temp=[100];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
    printf("%c",arr[i]);}
}