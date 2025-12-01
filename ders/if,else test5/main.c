#include <stdio.h>

int main() {
    float x, y;

    printf("--- Koordinat Duzlemi Analizorur ---\n");
    printf("X ve Y koordinatlarini giriniz (ornek: -5 3): ");
    scanf("%f %f", &x, &y);

    printf("Girdiginiz Nokta: (%.1f, %.1f)\n", x, y);
    printf("-------------------------------\n");

    if (x == 0 && y == 0) {
        printf("Konum: ORIJIN (Baslangic Noktasi)\n");
    }
    else if (x == 0) {
        printf("Konum: Y Ekseni Uzerinde\n");
    }
    else if (y == 0) {
        printf("Konum: X Ekseni Uzerinde\n");
    }
    else if (x > 0 && y > 0) {
        printf("Konum: 1. BOLGE (Sag Ust)\n");
    }
    else if (x < 0 && y > 0) {
        printf("Konum: 2. BOLGE (Sol Ust)\n");
    }
    else if (x < 0 && y < 0) {
        printf("Konum: 3. BOLGE (Sol Alt)\n");
    }
    else {
        printf("Konum: 4. BOLGE (Sag Alt)\n");
    }

    return 0;
}
