#include <stdio.h>

int main() {
    int notu;

    printf("--- Ogrenci Not Giris Sistemi ---\n");

    do {
        printf("Lutfen 0 ile 100 arasinda bir not giriniz: ");
        scanf("%d", &notu);

        if (notu < 0 || notu > 100) {
            printf(">> HATA: %d gecersiz bir nottur. Tekrar deneyin.\n", notu);
        }

    } while (notu < 0 || notu > 100);

    printf("\nBasarili! Sisteme girilen not: %d\n", notu);

    return 0;
}
