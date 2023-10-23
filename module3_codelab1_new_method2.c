#include <stdio.h>

int main() {
    int nilai;
    printf("Masukkan nilai:");
    scanf("%d", &nilai);
    printf("\n");

    if(nilai < 0 || nilai > 100) {
        printf("Input tidak valid, niai harus berada dalam rentang 0 hingga 100\n");
        return 1;
    }

    char nilaiStr[2];
    char *nilaiHuruf = &nilaiStr;
    if(nilai >= 90) {
        nilaiHuruf = "A";
    } else if(nilai >= 80) {
        nilaiHuruf = "B";
    } else if(nilai >= 70) {
        nilaiHuruf = "C";
    } else if(nilai > 60) {
        nilaiHuruf = "D+";
    } else if(nilai > 50) {
        nilaiHuruf = "D";
    } else {
        nilaiHuruf = "E+";
    }

    printf("Nilai anda adalah: %s", nilaiHuruf);

    return 1;
}