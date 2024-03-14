#include <stdio.h>

int main(void) {

    char arr[60];
    char *ptr;
    char *ptrs[3];

    ptr = arr;
    sprintf(ptr, "%s", "Mercredi");
    ptrs[2] = ptr;

    ptr += 28;
    sprintf(ptr, "%s", "Lundi");
    ptrs[0] = ptr;

    ptr += 14;
    sprintf(ptr, "%s", "Mardi");
    ptrs[1] = ptr;

    for (int i = 0; i < 3; i++) {
        printf("%s\n", ptrs[i]);
    }

    return 0;
}
