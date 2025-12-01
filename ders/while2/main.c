#include <stdio.h>

int main() {
    int sayi, orijinalSayi, kalan;
    int tersSayi = 0;

    printf("--- Palindrom Sayi Kontrolu ---\n");
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    orijinalSayi = sayi;

    if (sayi < 0) {
        printf("Negatif sayilarda palindrom aranmaz, pozitife ceviriliyor...\n");
        sayi = sayi * -1;
        orijinalSayi = orijinalSayi * -1;
    }

    while (sayi > 0) {

        kalan = sayi % 10;

        tersSayi = (tersSayi * 10) + kalan;

        sayi = sayi / 10;
    }

    printf("------------------------------\n");
    printf("Girilen Sayi : %d\n", orijinalSayi);
    printf("Ters Hali    : %d\n", tersSayi);

    if (orijinalSayi == tersSayi) {
        printf("SONUC: Bu bir PALINDROM sayidir.\n");
    } else {
        printf("SONUC: Bu bir Palindrom degildir.\n");
    }

    return 0;
}
