#include <stdio.h>

int main() {
    float saatlikUcret, calismaSaati, brutMaas, vergi, netMaas;
    char personelTipi;

    printf("--- Personel Maas Hesaplama Sistemi ---\n");

    printf("Personel Tipini Giriniz (A: Kidemli, B: Orta, C: Standart): ");
    scanf(" %c", &personelTipi); // %c'den onceki bosluk cok onemlidir!

    printf("Haftalik Calisma Saatini Giriniz: ");
    scanf("%f", &calismaSaati);

    printf("Saatlik Ucreti Giriniz (TL): ");
    scanf("%f", &saatlikUcret);

    if (calismaSaati > 40) {
        float normalKazanc = 40 * saatlikUcret;
        float mesaiSaati = calismaSaati - 40;
        float mesaiKazanci = mesaiSaati * (saatlikUcret * 1.5); // 1.5 kat odeme

        brutMaas = normalKazanc + mesaiKazanci;
        printf("\nBilgi: %.1f saat mesai yaptiniz.\n", mesaiSaati);
    }
    else {
        brutMaas = calismaSaati * saatlikUcret;
    }

    if (personelTipi == 'A' || personelTipi == 'a') {
        brutMaas = brutMaas + 1000;
        printf("Bilgi: A tipi personel bonusu (1000 TL) eklendi.\n");
    }
    else if (personelTipi == 'B' || personelTipi == 'b') {
        brutMaas = brutMaas + 500;
        printf("Bilgi: B tipi personel bonusu (500 TL) eklendi.\n");
    }

    if (brutMaas >= 20000) {
        vergi = brutMaas * 0.25; // %25 Vergi
        printf("Vergi Dilimi: Yuksek (%%25)\n");
    }
    else {
        vergi = brutMaas * 0.15; // %15 Vergi
        printf("Vergi Dilimi: Standart (%%15)\n");
    }

    netMaas = brutMaas - vergi;

    printf("-------------------------------\n");
    printf("Toplam Brut Maas : %.2f TL\n", brutMaas);
    printf("Kesilen Vergi    : %.2f TL\n", vergi);
    printf("Elinize Gecen Net: %.2f TL\n", netMaas);

    return 0;
}
