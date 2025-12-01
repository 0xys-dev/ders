#include <stdio.h>

int main() {
    int satirSayisi, i, j, bosluk;
    int deger;

    printf("--- Pascal Ucgeni Olusturucu ---\n");
    printf("Satir sayisini giriniz: ");
    scanf("%d", &satirSayisi);

    for (i = 0; i < satirSayisi; i++) {

        for (bosluk = 1; bosluk < satirSayisi - i; bosluk++) {
            printf("   ");
        }

        deger = 1;

        for (j = 0; j <= i; j++) {

            printf("%6d", deger);

            deger = deger * (i - j) / (j + 1);
        }

        printf("\n"); // Alt satira gec
    }

    return 0;
}
