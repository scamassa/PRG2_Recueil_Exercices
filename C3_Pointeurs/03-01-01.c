#include <stdio.h>

int main(void) {
    int nombre = 10;
    int *ptr_nombre = &nombre;

    printf("nombre = %d\n", *ptr_nombre);
    return 0;
}
