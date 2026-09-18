#include <stdio.h>

int main() {
    int a[10][10], n, i, j, k;
    scanf("%d", &n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(k=0;k<2*n-1;k++)
        for(i=0;i<n;i++) {
            j=k-i;
            if(j>=0 && j<n)
                printf("%d ",a[i][j]);
        }

    return 0;
}
