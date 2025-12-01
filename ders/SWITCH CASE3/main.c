#include <stdio.h>

int main() {
    int sayi, secim;
    int tempSayi, kalan, sonuc;

    printf("--- SAYI ANALIZ ROBOTU ---\n");
    printf("Analiz edilecek pozitif bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    do {
        printf("\n--- ISLEM MENUSU ---\n");
        printf("1. Basamak Sayisini Bul\n");
        printf("2. Rakamlari Topla\n");
        printf("3. Sayiyi Tersten Yazdir\n");
        printf("4. Yeni Sayi Gir\n");
        printf("5. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        tempSayi = sayi;
        sonuc = 0;

        switch(secim) {
            case 1:
                while (tempSayi > 0) {
                    tempSayi /= 10;
                    sonuc++;
                }
                printf(">> %d sayisi %d basamaklidir.\n", sayi, sonuc);
                break;

            case 2:
                while (tempSayi > 0) {
                    kalan = tempSayi % 10;
                    sonuc += kalan;
                    tempSayi /= 10;
                }
                printf(">> %d sayisinin rakamlari toplami: %d\n", sayi, sonuc);
                break;

            case 3:
                printf(">> %d sayisinin tersi: ", sayi);
                while (tempSayi > 0) {
                    kalan = tempSayi % 10;
                    printf("%d", kalan);
                    tempSayi /= 10;
                }
                printf("\n");
                break;

            case 4:
                printf("Yeni sayiyi giriniz: ");
                scanf("%d", &sayi);
                printf("Sayi guncellendi!\n");
                break;

            case 5:
                printf("Programdan cikiliyor. Iyi gunler!\n");
                break;

            default:
                printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
        }

    } while (secim != 5);

    return 0;
}
