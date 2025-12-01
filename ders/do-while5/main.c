#include <stdio.h>

int main() {
    float butce;
    float urunFiyati;
    float toplamTutar = 0.0;

    printf("--- AKILLI MARKET KASASI (Kuruslu) ---\n");
    printf("Lutfen market butcenizi giriniz ");
    scanf("%f", &butce);

    printf("Urun fiyatlarini girmeye baslayin (Bitirmek icin 0 girin).\n");
    printf("----------------------------------------------------------\n");

    do {
        printf("Urun fiyati: ");
        scanf("%f", &urunFiyati);

        if (urunFiyati == 0) {
            printf(">> Alisveris sonlandiriliyor...\n");
        }
        else if (urunFiyati < 0) {
            printf(">> HATA: Fiyat negatif olamaz!\n");
        }
        else {
            toplamTutar += urunFiyati;

            if (toplamTutar > butce) {
                float asilan = toplamTutar - butce;
                printf(">> DIKKAT! Butceyi %.2f TL astiniz!\n", asilan);
            } else {
                float kalan = butce - toplamTutar;
                printf(">> Toplam: %.2f TL (Kalan Butce: %.2f TL)\n", toplamTutar, kalan);
            }
        }

    } while (urunFiyati != 0);

    printf("----------------------------------------------------------\n");
    printf("ALISVERIS SONUCU:\n");
    printf("Toplam Tutar: %.2f TL\n", toplamTutar);

    if (toplamTutar > butce) {
        printf("Durum: BORCLANDINIZ (%.2f TL eksik)\n", toplamTutar - butce);
    } else {
        printf("Durum: ODEME BASARILI. Para ustu: %.2f TL\n", butce - toplamTutar);
    }

    return 0;
}
