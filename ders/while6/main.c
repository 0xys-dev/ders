#include <stdio.h>

int main() {
    int dizi[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int hedef, orta;
    int bas = 0;
    int son = n - 1;
    int bulunduMu = 0;

    printf("--- Ikili Arama (Binary Search) ---\n");
    printf("Dizi: 2, 5, 8, 12, 16, 23, 38, 56, 72, 91\n");
    printf("Aranacak sayiyi giriniz: ");
    scanf("%d", &hedef);

    while (bas <= son) {

        orta = (bas + son) / 2;


        if (dizi[orta] == hedef) {
            bulunduMu = 1;
            break;
        }
        else if (dizi[orta] < hedef) {
            bas = orta + 1;
        }
        else {
            son = orta - 1;
        }
    }

    printf("---------------------------\n");
    if (bulunduMu == 1) {
        printf("Tebrikler! %d sayisi %d. indekste bulundu.\n", hedef, orta);
    } else {
        printf("Uzgunum, %d sayisi dizide mevcut degil.\n", hedef);
    }

    return 0;
}
