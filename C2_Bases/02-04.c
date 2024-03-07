#include <stdio.h>

int main(void) {

    //ex1
    int nb;

    printf("Entrer nb:\n");
    scanf("%d", &nb);

    if ((nb % 3) == 0 && (nb % 13) == 0) {
        printf("%d est divisible par 3 et 13\n", nb);
    } else {
        printf("%d n'est pas divisible par 3 et 13\n", nb);
    }

    //ex2
    int a, b, c;
    printf("entrer 3 nb\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("le max est: %d", a);
        } else {
            printf("le max est: %d", c);
        }
    } else {
        if (b > c) {
            printf("le max est: %d", b);
        } else {
            printf("le max est: %d", c);
        }
    }
    return 0;
}
