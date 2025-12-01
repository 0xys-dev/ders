#include <stdio.h>

int main() {
    int n;
    int bolen = 2;

    printf("--- Asal Carpanlara Ayirma Programi ---\n");
    printf("Pozitif bir tam sayi giriniz: ");
    scanf("%d", &n);

    printf("%d sayisinin asal carpanlari: ", n);

    if (n < 2) {
        printf("Yoktur (Sayi 2'den kucuk).");
    }

    while (n > 1) {

        if (n % bolen == 0) {
            printf("%d ", bolen);
            n = n / bolen;

            if (n > 1) {
                printf("x ");
            }
        }
        else {
            bolen++;
        }
    }
    printf("\n");

    return 0;
}
