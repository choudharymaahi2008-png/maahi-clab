#include <stdio.h>

int main() {
    int a[100], n, i, max, second;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = second = -99999;

    for(i = 0; i < n; i++) {
        if(a[i] > max) {
            second = max;
            max = a[i];
        }
        else if(a[i] > second && a[i] != max)
            second = a[i];
    }

    printf("%d", second);
    return 0;
}
