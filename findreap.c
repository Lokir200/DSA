#include <stdio.h>
void main() {
    int arr[]={2,4,2,3,4,4,5}, n=7;
    for(int i=0;i<n;i++){
        int count=1;
        if(arr[i]!=-1){
            for(int j=i+1;j<n;j++)
                if(arr[i]==arr[j]) { count++; arr[j]=-1; }
            if(count>1) printf("%d repeats %d times\n",arr[i],count);
        }
    }
}
