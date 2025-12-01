#include <stdio.h>

int main() {
    int secim;
    float PI = 3.14;

    printf("--- Geometri Muhendisi ---\n");

    do {
        printf("\nHesaplama yapmak istediginiz sekli seciniz:\n");
        printf("1. Daire (Alan ve Cevre)\n");
        printf("2. Dikdortgen (Alan ve Cevre)\n");
        printf("3. Ucgen (Sadece Alan)\n");
        printf("4. Cikis Yap\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        printf("------------------------------\n");

        switch (secim) {

            case 1: {
                float r, alan, cevre;
                printf("Dairenin yaricapini (r) giriniz: ");
                scanf("%float", &r);

                if (r > 0) {
                    alan = PI * r * r;
                    cevre = 2 * PI * r;
                    printf(">> Daire Alani : %.2f\n", alan);
                    printf(">> Daire Cevresi: %.2f\n", cevre);
                } else {
                    printf("Hata: Yaricap pozitif olmalidir!\n");
                }
                break;
            }

            case 2: {
                float a, b;
                printf("Kisa kenari ve Uzun kenari giriniz: ");
                scanf("%f %f", &a, &b);

                if (a > 0 && b > 0) {
                    printf(">> Dikdortgen Alani : %.2f\n", a * b);
                    printf(">> Dikdortgen Cevresi: %.2f\n", 2 * (a + b));
                } else {
                    printf("Hata: Kenarlar pozitif olmalidir!\n");
                }
                break;
            }

            case 3: {
                float taban, yukseklik;
                printf("Taban uzunlugunu ve Yuksekligi giriniz: ");
                scanf("%f %f", &taban, &yukseklik);

                if (taban > 0 && yukseklik > 0) {
                    float alan = (taban * yukseklik) / 2.0;
                    printf(">> Ucgen Alani: %.2f\n", alan);
                } else {
                    printf("Hata: Degerler pozitif olmalidir!\n");
                }
                break;
            }

            case 4:
                printf("Cikis yapiliyor. Iyi gunler!\n");
                break;

            default:
                printf("Gecersiz bir secim yaptiniz. Lutfen 1-4 arasi seciniz.\n");
        }

    } while (secim != 4);

    return 0;
}
