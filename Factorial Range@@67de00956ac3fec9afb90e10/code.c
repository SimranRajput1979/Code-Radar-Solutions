// Your code here...
int factorialRange(int n,int m){
    int fact=1;
    for(int i=n,i<=m,i++){
        if(i==0 || i==1){
            return 0;
        }
        else{
            fact=fact*i;
        }
        printf("%d\n",fact);

    }
}