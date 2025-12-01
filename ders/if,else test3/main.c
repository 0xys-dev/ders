#include <stdio.h>

int main() {
    int a, b, c;

    printf("--- Ucgen Analiz Sistemi ---\n");
    printf("Ucgenin uc kenar uzunlugunu giriniz (ornek: 3 4 5): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Hata: Kenar uzunluklari pozitif olmalidir.\n");
    }
    else if ((a + b > c) && (a + c > b) && (b + c > a)) {

        printf("Bilgi: Bu kenarlarla gecerli bir ucgen olusturulabilir.\n");


        if (a == b && b == c) {
            printf("Tur: Eskenar Ucgen (Tum kenarlar esit)\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Tur: Ikizkenar Ucgen (Iki kenar esit)\n");
        }
        else {
            printf("Tur: Cesitkenar Ucgen (Tum kenarlar farkli)\n");
        }

        if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) {
            printf("Ozel Durum: Bu ayni zamanda bir DIK UCGENDIR! (Pisagor saglandi)\n");
        }

    }
    else {
        printf("Hata: Bu kenar uzunluklari ile bir ucgen OLUSTURULAMAZ!\n");
        printf("Ipucu: Herhangi iki kenarin toplami ucuncuden buyuk olmalidir.\n");
    }

    return 0;
}
