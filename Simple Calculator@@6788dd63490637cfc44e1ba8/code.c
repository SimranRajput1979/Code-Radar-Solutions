// #include <stdio.h>
// #include <string.h>
// int main(){
//     int a,b;
//     char c[2];
//     scanf("%d %d %c",&a,&b,&c);
//     if (strcmp(c,"+")==0){
//         printf("%d\n",a+b);
//     }
//     else if (strcmp(c,"-")==0){
//         printf("%d\n",a-b);
//     }
//     else if (strcmp(c,"*")==0){
//         printf("%d\n",a*b);
//     }
//     else if (strcmp(c,"/")==0){
//         if (b!=0){
//             printf("%d\n",a/b);
//         }
//         else{
//             printf("error");
//         }
//     }
//     else{
//         printf("error");
//     }
//     return 0;

// } this code is also corrected

#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if (c=='+'){
        printf("%d\n",a+b);
    }
    else if (c=='-'){
        printf("%d\n",a-b);
    }
    else if (c=='*'){
        printf("%d\n",a*b);
    }
    else if (c=='/'){
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