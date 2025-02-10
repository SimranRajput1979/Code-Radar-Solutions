#include <stdio.h>
int main(){
    char a[100];
    scanf("%c",&a);
    if (a=='a','e','i','o','u'){
        printf("Vowel");
    }
    else if(a!='a','e','i','o','u'){
        printf("Consonant");
    }
    else if (isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}