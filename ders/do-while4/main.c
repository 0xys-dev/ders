#include <stdio.h>

int main() {
    long long n;
    int toplam;

    printf("--- Dijital Kok (Digital Root) Hesaplayici ---\n");
    printf("Bir sayi giriniz: ");
    scanf("%lld", &n);

    printf("\nIslem Adimlari:\n");
    printf("Baslangic: %lld\n", n);

    do {
        toplam = 0;

        while (n > 0) {
            toplam += (n % 10);
            n /= 10;
        }

        n = toplam;

        printf("-> Yeni Toplam: %lld\n", n);

    } while (n >= 10);

    printf("------------------------\n");
    printf("DIJITAL KOK SONUCU: %lld\n", n);

    return 0;
}
