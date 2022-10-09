#include<stdio.h>
#include<math.h>
    int main(){
        int alas = 5;
        int tinggi = 12;
        int miring = sqrt(pow((alas), 2) + pow((tinggi), 2));
        printf("Diketahui :\n");
        printf("Alas = %d cm\n", alas);
        printf("Tinggi = %d cm\n\n", tinggi);
        printf("Jawab :\n");
        printf("Sisi A = %d cm\n", tinggi);
        printf("Sisi B = %d cm\n", miring);
        printf("Sisi C = %d cm\n", alas);
        printf("Keliling = %d cm\n", alas+tinggi+miring);
        printf("Luas = %d cm", (alas*tinggi)/2);
        return 0;
    }