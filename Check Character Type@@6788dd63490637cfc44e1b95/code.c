#include <stdio.h>
int main(){
    char a[100];
    scanf("%c",&a);
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("Vowel");
    }
    else if(a!='a'||a!='e'||a!='i'||a!='o'||a!='u'){
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