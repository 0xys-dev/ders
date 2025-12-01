#include <stdio.h>

int main() {
    int n, i;
    unsigned long long faktoriyel = 1;

    printf("--- Faktoriyel Hesaplayici ---\n");
    printf("Bir sayi giriniz (0-20 arasi): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Hata: Negatif sayilarin faktoriyeli yoktur.\n");
    }
    else {
        for (i = 1; i <= n; i++) {
            faktoriyel = faktoriyel * i;
        }

        printf("%d! (Faktoriyel) = %llu\n", n, faktoriyel);
    }

    return 0;
}
