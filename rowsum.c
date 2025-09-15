#include <stdio.h>
void main() {
    int a[2][3]={{2,4,6},{1,3,5}};
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<3;j++) sum+=a[i][j];
        printf("Row %d sum: %d\n",i+1,sum);
    }
}
