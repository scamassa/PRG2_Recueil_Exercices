#include <stdio.h>

int main(void) {

    char *name[50];
    int age;

    printf("enter name:\n");
    scanf("%s", name);

    printf("enter age\n");
    scanf("%d", &age);

    printf("welcome %s, you are %d years old\n", name, age);

    return 0;
}
