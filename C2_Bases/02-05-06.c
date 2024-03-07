#include <stdio.h>

int main(void) {

    int max = 0, a;
    printf("nombres:\n");

    scanf("%d", a);
    while (a != -1) {
        max = (a > max) ? a : max;
        scanf("%d", a);
    }

    printf("%d", max);

    return 0;
}
