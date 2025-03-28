// Your code here...
void binarySearch(int arr[],target[]){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<target){
            low=mid+1;}
            else if(arr[mid]==target){
                printf("%d"mid+1);
                break;
            }
            else{
                high=mid-1;
            }
            if (low>high)
            printf("%d",target);
        
    }
}