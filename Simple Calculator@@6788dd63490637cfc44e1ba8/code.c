#include <stdio.h>
int main(){
    int a,b;
    char c[100];
    scanf("%d %c %d",&a,&c,&b);
    if (c=="+"){
        printf("%d\n",a+b);
    }
    else if (c=="-"){
        printf("%d\n",a-b);
    }
    else if (c=="*"){
        printf("%d\n",a*b);
    }
    else if (c=="/"){
        if (b!=0){
            printf("%d\n",a/b);
        }
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }
    return 0;

}