#include <stdio.h>
void main() {
    int arr[] = {2, 4, 6, 2, 3, 4, 7}, n = 7, counted[7]={0};
    for(int i=0; i<n; i++) {
        if(counted[i]) continue;
        int count = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                counted[j] = 1;
            }
        }
        printf("Element %d appears %d times\n", arr[i], count);
    }
}
   
