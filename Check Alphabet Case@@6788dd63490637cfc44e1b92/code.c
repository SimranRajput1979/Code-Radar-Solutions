#include <stdio.h>
int main(){
    char a[100];
    scanf("%c",&a);
    if (isupper(a)){
        printf("Uppercase");
    }
    else if (islower(a)){
        printf("Lowercase");
    }
    return 0;
}