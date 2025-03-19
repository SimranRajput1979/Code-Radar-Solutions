// Your code here...
#include <stdio.h>

void decimalToBinary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {   // Loop through all 32 bits
        printf("%d", (num >> i) & 1); // Extract the i-th bit
    }
    printf("\n");  // New line after printing binary
}

int main() {
    unsigned int num;
    scanf("%u", &num);

    decimalToBinary(num);

    return 0;
}
