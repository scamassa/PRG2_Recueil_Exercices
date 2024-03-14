#include <stdio.h>

void calcul_somme(int taille, int *arr1, int *arr2, int *res) {

    for (int i = 0; i < taille; i++) {
        res[i] = arr1[i] + arr2[i];
    }
}

void afficher(int taille, int *arr) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {

    int arr1[20];
    int arr2[20];
    int *res[20];

    calcul_somme(20, arr1, arr2, res);
    afficher(20, arr1);
    afficher(20, arr2);
    afficher(20, res);
    return 0;
}
