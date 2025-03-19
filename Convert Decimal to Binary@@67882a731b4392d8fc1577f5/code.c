// Your code here...
#include <stdio.h>

void decimalToBinary(unsigned int num) {
    int started = 0;  // Flag to skip leading zeros

    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            started = 1;  // Start printing when we find the first '1'
        }
        if (started) {
            printf("%d", (num >> i) & 1);
        }
    }

    if (!started) {
        printf("0");  // If number is 0, just print '0'
    }
    
    printf("\n");
}

int main() {
    unsigned int num;
    scanf("%u", &num);  // Take input
    decimalToBinary(num);  // Convert and print binary
    return 0;
}
