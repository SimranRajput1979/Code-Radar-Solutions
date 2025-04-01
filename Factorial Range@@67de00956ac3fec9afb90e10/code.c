// Your code here...
int factorialRange(int n,int m){
    // int fact=1;
    for(int i=n;i<=m;i++){
    int fact(n){
        if(i==0 || i==1){
            return 1;
        }
        else{
            fact=n*fact(n-1);
        }
    }
    printf("%d\n",fact(n));
    // return fact;
}
}