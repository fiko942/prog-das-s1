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

    char nilaiStr;
    if(nilai >= 90) {
        nilaiStr = 'A';
    } else if(nilai >= 80) {
        nilaiStr = 'B';
    } else if(nilai >= 70) {
        nilaiStr = 'C';
    } else if(nilai > 60) {
        nilaiStr = 'D+';
    } else if(nilai > 50) {
        nilaiStr = 'D';
    } else {
        nilaiStr = 'E';
    }

    printf("Nilai anda adalah: %c", nilaiStr);

    return 1;
}