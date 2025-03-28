// Your code here...
#include<string.h>
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            min=j;
        }
        char temp[100];
        strcmp (temp,arr[min]);
        strcmp (arr[min],arr[i]);
        strcmp (arr[i],temp);
    }
}
void printArray(char arr[n][100],int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}