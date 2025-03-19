// Your code here...
#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n");  // If the number is 0, all 32 bits are zeros.
        return 0;
    }

    int count = 0;

    while ((num & (1 << 31)) == 0) {  // Check if the leftmost bit is 0
        count++;
        num = num << 1;  // Shift left to check the next bit
    }

    printf("%d\n", count);
    return 0;
}
