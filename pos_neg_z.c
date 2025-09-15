#include <stdio.h>
void main() {
    int arr[] = {4, -2, 0, 5, -9, 0, 3}, n = 7, pos = 0, neg = 0, zer = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) neg++;
        else zer++;
    }
    printf("Positive: %d\nNegative: %d\nZero: %d\n", pos, neg, zer);
}
