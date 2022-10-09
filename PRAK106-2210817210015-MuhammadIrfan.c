#include<stdio.h>
    int main(){
        int a = 4;
        int b = 8;
        int c = 3;
        printf("Variabel a bernilai %d\n", a);
        printf("Variabel b bernilai %d\n", b);
        printf("Variabel c bernilai %d\n", c);
        if (a==b){
            printf("Apakah a sama dengan b ? jawabannya adalah %d\n", a==b);} 
        else {
            printf("Apakah a sama dengan b ? jawabannya adalah %d\n", a==b);}
        if (b>c){
            printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", b>c);}
        else{
            printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", b>c);}
        if (a!=c){
            printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", a!=c);}
        else{
            printf("Apakah a tidak sama dengan c ? jawabannya adalah %d", a!=c);}
        return 0;
    }