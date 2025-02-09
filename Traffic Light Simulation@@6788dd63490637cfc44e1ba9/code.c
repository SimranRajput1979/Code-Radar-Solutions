#include <stdio.h>
int main(){
    char a[100];
    scanf("%c",&a);
    if (a=="R" || a=="r"){
        printf("Stop");
    }
    else if (a=="G"){
        printf("Go");
    }
    else if (a=="Y"){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}