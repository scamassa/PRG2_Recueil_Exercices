#include <stdio.h>

int main(void) {

    char nom[50];
    int age;

    char *ptr_nom = &nom;
    int *ptr_age = &age;

    char **ptr_ptr_nom = &ptr_nom;
    int **ptr_ptr_age = &ptr_age;

    printf("entrez nom: ");
    scanf("%s", *ptr_ptr_nom); //ATTENTION, scanf prend une adresse !!!!!

    printf("entrez age: ");
    scanf("%d", *ptr_ptr_age); //idem

    printf("nom: %s, age: %d", nom, age);

    return 0;
}
