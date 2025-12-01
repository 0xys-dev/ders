#include <stdio.h>

int main() {
    int n, i;
    int kalanlar[32];
    int sayac = 0;

    printf("--- Decimal -> Binary Cevirici ---\n");
    printf("Pozitif bir tam sayi giriniz: ");
    scanf("%d", &n);

    printf("%d sayisinin Binary (Ikilik) karsiligi: ", n);

    if (n == 0) {
        printf("0");
    }
    else {
        for (i = 0; n > 0; i++) {
            kalanlar[i] = n % 2;
            n = n / 2;
            sayac++;
        }

        for (i = sayac - 1; i >= 0; i--) {
            printf("%d", kalanlar[i]);
        }
    }

    printf("\n");
    return 0;
}
