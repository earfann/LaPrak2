#include<stdio.h>
    int main(){
        int sisi1 = 4;
        int sisi2 = 5;
        int sisi3 = 7;
        int harga = 85000;
        int keliling = sisi1+sisi2+sisi3;
        printf("Diketahui :\n");
        printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
        printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
        printf("Harga tanah Per Meter adalah %d\n", harga);
        printf("Jawaban :\n");
        printf("Biaya yang diperlukan Pak Dengklek adalah Rp %d", keliling*harga);
        return 0;
    }