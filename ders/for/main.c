#include <stdio.h>

int main() {
    int n, i;
    int toplam = 0;

    printf("--- Mukemmel Sayi Kontrolu ---\n");
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {

        if (n % i == 0) {
            toplam = toplam + i;
        }
    }

    printf("------------------------------\n");

    if (toplam == n) {
        printf(">> %d MUKEMMEL bir sayidir!\n", n);
    } else {
        printf(">> %d Mukemmel sayi DEGILDIR.\n", n);
    }

    return 0;
}
