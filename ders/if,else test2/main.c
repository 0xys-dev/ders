#include <stdio.h>

int main() {
    float tuketim, faturaTutari;

    float fiyat1 = 1.50; // 0-100 arasi
    float fiyat2 = 2.50; // 101-200 arasi
    float fiyat3 = 3.50; // 201 ustu

    printf("--- Elektrik Faturasi Hesaplayici ---\n");
    printf("Aylik tuketim miktarini (kW) giriniz: ");
    scanf("%f", &tuketim);

    if (tuketim < 0) {
        printf("Hata: Tuketim miktari 0'dan kucuk olamaz!\n");
    }

    else if (tuketim <= 100) {
        faturaTutari = tuketim * fiyat1;
    }

    else if (tuketim <= 200) {
        // İlk 100 birim kesin dolu, kalani hesapla
        faturaTutari = (100 * fiyat1) + ((tuketim - 100) * fiyat2);
    }
    else {
        // İlk 200 birim (100+100) kesin dolu, kalani hesapla
        faturaTutari = (100 * fiyat1) + (100 * fiyat2) + ((tuketim - 200) * fiyat3);
    }

    if (tuketim >= 0) {
        printf("----------------------------\n");
        printf("Toplam Tuketim: %.2f kW\n", tuketim);
        printf("Odenecek Tutar: %.2f TL\n", faturaTutari);
    }

    return 0;
}
