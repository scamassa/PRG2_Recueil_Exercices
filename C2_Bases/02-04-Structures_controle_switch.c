#include <stdio.h>

int main(void) {

    //ex1
    int nb_jour;
    char *jour;

    do {
        printf("saisir nb jour valide:\n");
        scanf("%d", &nb_jour);
    }
    while (nb_jour > 7 || nb_jour < 1);

    switch (nb_jour) {
    case 1:
        jour = "lundi";
        break;
    case 2:
        jour = "mardi";
        break;
    case 3:
        jour = "mercredi";
        break;
    case 4:
        jour = "jeudi";
        break;
    case 5:
        jour = "vendredi";
        break;
    case 6:
        jour = "samedi";
        break;
    case 7:
        jour = "dimanche";
        break;
    default:
        jour = "erreur";
        break;
    }

    printf("%s\n", jour);

    //ex2
    float a, b, res;
    char op;

    printf("calcul:\n");
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("erreur\n");
        return -1;
    }
    printf("%f", res);

    return 0;
}
