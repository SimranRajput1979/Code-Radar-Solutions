// Your code here...
#include <stdio.h>

int main() {
    unsigned int num, count = 0;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n");  // If the number is 0, all 32 bits are zeros.
        return 0;
    }

    while ((num & 1) == 0) {  // Check if the last bit is 0
        count++;
        num = num >> 1;  // Shift right to check the next bit
    }

    printf("%d\n", count);
    return 0;
}
