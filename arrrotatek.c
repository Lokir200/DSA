#include <stdio.h>
void main() {
    int arr[] = {1,2,3,4,5}, n = 5, k = 2;
    for(int r = 0; r < k; r++) {
        int t = arr[n-1];
        for(int i = n-1; i > 0; i--)
            arr[i] = arr[i-1];
        arr[0] = t;
    }
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}
