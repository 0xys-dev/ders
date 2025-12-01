#include <stdio.h>

int main() {
    float fiyat;
    float genelToplam = 0.0;
    int urunSayisi = 0;

    printf("--- Market Kasa Programi ---\n");
    printf("Urun fiyatlarini giriniz (Islemi bitirmek icin 0 tuslayin).\n");
    printf("----------------------------------------------------------\n");

    do {
        printf("Urun Fiyati: ");
        scanf("%f", &fiyat);

        if (fiyat < 0) {
            printf(">> Hata: Urun fiyati negatif olamaz!\n");
        }
        else if (fiyat > 0) {
            genelToplam += fiyat;
            urunSayisi++;
        }


    } while (fiyat != 0); // Kullanici 0 girene kadar donmeye devam et

    printf("\n--- FIS DETAYI ---\n");
    printf("Toplam Urun Adedi : %d\n", urunSayisi);
    printf("ODENECEK TUTAR    : %.2f TL\n", genelToplam);

    if (genelToplam > 500) {
        printf("Bilgi: 500 TL uzeri alisveris yaptiginiz icin kargo bedava!\n");
    }

    return 0;
}
