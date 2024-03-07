#include <stdio.h>

int main(void) {
    int res;

    for (int i = 1; i <= 100; i++) {
        res += i;
    }
    printf("%d\n", res);

    return 0;
}
