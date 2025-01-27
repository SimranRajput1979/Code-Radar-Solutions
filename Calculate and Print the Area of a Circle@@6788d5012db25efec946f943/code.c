#include <stdio.h>
#define PI 3.14159
int main(){
    float r,area;
    scanf("%.2f",&r);
    area=PI*r*r;
    printf("Area: %.2f\n",area);
    return 0;
}