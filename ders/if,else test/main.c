#include <stdio.h>

int main() {

    int sistemPin = 3456;
    float bakiye = 5000.0;
    int girilenPin;
    float cekilecekTutar;

    printf("--- ATM Sistemine Hosgeldiniz ---\n");

    printf("Lutfen 4 haneli PIN kodunuzu giriniz: ");
    scanf("%d", &girilenPin);


    if (girilenPin == sistemPin) {

        printf("Giris Basarili!\n");
        printf("Mevcut Bakiyeniz: %.2f TL\n", bakiye);
        printf("Cekmek istediginiz tutari giriniz: ");
        scanf("%f", &cekilecekTutar);

        if (cekilecekTutar > bakiye) {
            printf("Hata: Yetersiz Bakiye! En fazla %.2f TL cekebilirsiniz.\n", bakiye);
        }
        else if (cekilecekTutar <= 0) {
            printf("Hata: Gecersiz tutar girdiniz. Lutfen pozitif bir deger girin.\n");
        }
        else {
            bakiye = bakiye - cekilecekTutar;
            printf("Islem Basarili! Lutfen paranizi aliniz.\n");
            printf("Kalan Bakiyeniz: %.2f TL\n", bakiye);
        }

    }
    else {
        printf("Hata: Yanlis PIN kodu girdiniz! Sistem kilitlendi.\n");
    }

    return 0;
}
