// Your code here...
#include <stdio.h>

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);
    
    num = num ^ (1 << pos);  // Toggle the nth bit
    
    printf("%d\n", num);
    return 0;
}
