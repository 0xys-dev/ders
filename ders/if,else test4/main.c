#include <stdio.h>

int main() {
    float vize, finalNotu, ortalama;
    int devamsizlik;

    printf("--- Universite Not ve Basari Hesaplama Sistemi ---\n");

    printf("Vize notunuzu giriniz (0-100): ");
    scanf("%f", &vize);

    printf("Final notunuzu giriniz (0-100): ");
    scanf("%f", &finalNotu);

    printf("Toplam devamsizlik sayisini giriniz: ");
    scanf("%d", &devamsizlik);

    if (vize < 0 || vize > 100 || finalNotu < 0 || finalNotu > 100 || devamsizlik < 0) {
        printf("Hata: Gecersiz degerler girdiniz. Lutfen kontrol ediniz.\n");
    }
    else if (devamsizlik > 10) {
        printf("Durum: KALDI (NA)\n");
        printf("Sebep: Devamsizlik sinirini (10 ders) asmissiniz.\n");
    }
    else if (finalNotu < 50) {
        printf("Durum: KALDI (FF)\n");
        printf("Sebep: Final notunuz 50'nin altinda (Baraji gecemediniz).\n");
        ortalama = (vize * 0.4) + (finalNotu * 0.6);
        printf("Not Ortalamaniz: %.2f (Ancak baraj sebebiyle gecersiz)\n", ortalama);
    }
    else {
        ortalama = (vize * 0.4) + (finalNotu * 0.6);

        printf("----------------------------\n");
        printf("Yil Sonu Ortalamaniz: %.2f\n", ortalama);

        if (ortalama >= 90) {
            printf("Harf Notu: AA (Mukemmel)\n");
            printf("Sonuc: GECTI\n");
        }
        else if (ortalama >= 85) {
            printf("Harf Notu: BA (Cok Iyi)\n");
            printf("Sonuc: GECTI\n");
        }
        else if (ortalama >= 75) {
            printf("Harf Notu: BB (Iyi)\n");
            printf("Sonuc: GECTI\n");
        }
        else if (ortalama >= 60) {
            printf("Harf Notu: CC (Orta)\n");
            printf("Sonuc: GECTI\n");
        }
        else if (ortalama >= 50) {
            printf("Harf Notu: DD (Sartli Gecer / Sinirda)\n");
            printf("Sonuc: GECTI\n");
        }
        else {
            printf("Harf Notu: FF (Basarisiz)\n");
            printf("Sonuc: KALDI\n");
        }
    }

    return 0;
}
