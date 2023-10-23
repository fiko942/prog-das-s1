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

    char nilaiStr[1];
    if(nilai >= 90) {
        nilaiStr[0] = 'A';
    } else if(nilai >= 80) {
        nilaiStr[0] = 'B';
    } else if(nilai >= 70) {
        nilaiStr[0] = 'C';
    } else if(nilai > 60) {
        nilaiStr[0] = 'D';
    } else {
        nilaiStr[0] = 'E';
    }

    printf("Nilai anda adalah: %s", nilaiStr);

    return 1;
}