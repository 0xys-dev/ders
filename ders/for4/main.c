#include <stdio.h>

int main() {
    int i, j;

    printf("--- Carpim Tablosu ---\n\n");

    for (i = 1; i <= 10; i++) {

        for (j = 1; j <= 10; j++) {

            printf("%4d", i * j);
        }

        printf("\n\n");
    }

    return 0;
}
