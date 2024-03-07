#include <stdio.h>

int main(void) {

    int res, a;
    printf("entrez nombres:\n");
    while (1) {
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        res += a;
    }
    printf("%d\n", res);

    return 0;
}
