#include <stdio.h>

int main() {
    float bakiye = 1000.0;
    float tutar;
    int secim;

    printf("--- BANKAMATIK SISTEMINE HOSGELDINIZ ---\n");

    do {
        printf("\nIslem Menusu:\n");
        printf("1. Bakiye Sorgula\n");
        printf("2. Para Yatir\n");
        printf("3. Para Cek\n");
        printf("4. Cikis\n");
        printf("Seciminizi Yapiniz (1-4): ");
        scanf("%d", &secim);

        printf("------------------------------\n");

        switch (secim) {
            case 1:
                printf("Mevcut Bakiyeniz: %.2f TL\n", bakiye);
                break;

            case 2:
                printf("Yatirmak istediginiz tutar: ");
                scanf("%f", &tutar);
                if (tutar > 0) {
                    bakiye += tutar;
                    printf("Islem Basarili. Yeni Bakiye: %.2f TL\n", bakiye);
                } else {
                    printf("Hata: Gecersiz tutar!\n");
                }
                break;

            case 3:
                printf("Cekmek istediginiz tutar: ");
                scanf("%f", &tutar);
                if (tutar > bakiye) {
                    printf("Yetersiz Bakiye! En fazla %.2f TL cekebilirsiniz.\n", bakiye);
                } else if (tutar <= 0) {
                    printf("Hata: Gecersiz tutar!\n");
                } else {
                    bakiye -= tutar;
                    printf("Paranizi aliniz. Kalan Bakiye: %.2f TL\n", bakiye);
                }
                break;

            case 4:
                printf("Sistemden cikis yapiliyor. Iyi gunler dileriz...\n");
                break;

            default:
                printf("HATA: Yanlis bir secim yaptiniz. Lutfen tekrar deneyin.\n");
        }

    } while (secim != 4);

    printf("--- Program Sonlandi ---\n");

    return 0;
}
