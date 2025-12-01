#include <stdio.h>

int main() {
    char islem;
    double sayi1, sayi2;

    printf("--- Switch-Case Hesap Makinesi ---\n");
    printf("Yapilacak islemi giriniz (+, -, *, /): ");
    scanf("%c", &islem);

    printf("Iki sayi giriniz: ");
    scanf("%lf %lf", &sayi1, &sayi2);

    switch (islem) {

        case '+':
            printf("Sonuc: %.2lf\n", sayi1 + sayi2);
            break;

        case '-':
            printf("Sonuc: %.2lf\n", sayi1 - sayi2);
            break;

        case '*':
            printf("Sonuc: %.2lf\n", sayi1 * sayi2);
            break;

        case '/':
            if (sayi2 != 0) {
                printf("Sonuc: %.2lf\n", sayi1 / sayi2);
            } else {
                printf("Hata: Bir sayi 0'a bolunemez!\n");
            }
            break;

        default:
            printf("Hata: Gecersiz islem operatoru girdiniz!\n");
    }

    return 0;
}
