#include <stdio.h>

int main() {
    int n, i;
    double sonuc = 0.0;

    printf("--- Isaret Degistiren Seri Hesabi ---\n");
    printf("Formul: 1 - 1/2 + 1/3 - 1/4 ... \n");
    printf("Kac terim hesaplansin? (n): ");
    scanf("%d", &n);

    printf("Hesaplama Adimlari:\n");

    for (i = 1; i <= n; i++) {

        if (i % 2 != 0) {
            sonuc += (1.0 / i);

            if (i == 1) printf("1 ");
            else printf("+ 1/%d ", i);
        }
        else {
            sonuc -= (1.0 / i);
            printf("- 1/%d ", i);
        }
    }

    printf("\n\n---------------------------\n");
    printf("Serinin Toplami: %.5lf\n", sonuc);

    return 0;
}
