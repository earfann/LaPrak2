#include<stdio.h>
    int main(){
        float putaran = 5;
        float jarak = 14;
        float phi = 3.14;
        printf("Diketahui :\n");
        printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", putaran);
        printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n", jarak);
        printf("Jawaban :\n");
        printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", (jarak/putaran)/(2*phi));
        return 0;
    }