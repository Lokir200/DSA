#include <stdio.h>
void main() {
    int arr[]={0,1,0,3,12,0,5}, n=7, index=0;
    for(int i=0;i<n;i++) if(arr[i]!=0) arr[index++]=arr[i];
    while(index<n) arr[index++]=0;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}
