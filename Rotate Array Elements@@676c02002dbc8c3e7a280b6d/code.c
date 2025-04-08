// Your code here...
#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n;  
    for (int i = 0; i < k; i++) {
        int last = arr[n - 1]; 
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1]; 
        }
        arr[0] = last;
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rotateRight(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
