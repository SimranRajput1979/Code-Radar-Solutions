// Your code here...

#include <stdio.h>

int main() {
    int num, pos = 0;
    scanf("%d", &num);
    
    if (num == 0) {
        printf("-1\n");  // No set bit found
        return 0;
    }

    while ((num & 1) == 0) {  // Check if the last bit is 0
        num = num >> 1;       // Shift right to check the next bit
        pos++;                // Increase position
    }

    printf("%d\n", pos);
    return 0;
}

