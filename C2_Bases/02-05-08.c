#include <stdio.h>

int main(void) {

    int age;
    do {
        printf("Entrez votre âge:\n");
        scanf("%d", &age);
    }
    while (age < 18);
    printf("Acces accorde.\n");

    return 0;
}
