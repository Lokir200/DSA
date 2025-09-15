#include <stdio.h>
void main() {
    int arr[]={123,456,789}, n=3;
    for(int i=0;i<n;i++) {
        int x=arr[i], rev=0;
        while(x) { rev=rev*10+x%10; x/=10; }
        printf("%d ",rev);
    }
}
