#include <stdio.h>

int main(void) {

    int nombre, inv = 0;
    printf("Entrez un nombre pour inverser ses chiffres:");
    scanf("%d", &nombre);

    do {
        inv = (nombre % 10) + inv * 10;
        nombre /= 10;
    }
    while (nombre > 0);

    printf("Le nombre inversé est: %d\n", inv);

    return 0;
}
