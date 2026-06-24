#include <stdio.h>

int main() {
    int n, sum = 0;
    while (1) {
        scanf("%d",&n);
        sum = sum + n;
        if (n == 0) {
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}