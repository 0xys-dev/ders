#include <stdio.h>

int main() {
    int sayi, orijinalSayi, kalan;
    int toplam = 0;

    printf("--- Basamak Toplami Hesaplayici ---\n");
    printf("Bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    orijinalSayi = sayi;

    if (sayi < 0) {
        sayi = sayi * -1;
    }
    while (sayi > 0) {
        kalan = sayi % 10;
        toplam = toplam + kalan;
        sayi = sayi / 10;
    }

    printf("%d sayisinin basamaklari toplami: %d\n", orijinalSayi, toplam);

    return 0;
}
