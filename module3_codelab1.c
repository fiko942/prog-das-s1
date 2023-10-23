#include <stdio.h>

int main(){
	//Membuat variabel
	int nilai;
	
	//Menampilkan pesan untuk memasukkan nilai
	printf("Masukkan nilai Anda: ");
	//Mendapatkan nilai dari yang di input oleh user
	scanf("%d", &nilai);
	
	//Berfungsi untuk jika nilai nilai lebih dari 0 dan tidak lebih dari 100
	if (nilai >= 0 || nilai <= 100) {
		//Berfungsi jika nilai lebih dari/sama dengan 90
		if (nilai >= 90) {
			//Menampilkan nilai yang didapatkan jika nilai lebih dari/sama dengan 90
			printf("Nilai Anda adalah A.\n");
		}else if (nilai >= 80) {
			printf("Nilai Anda adalah B.\n");
		}else if (nilai >= 70) {
			printf("Nilai Anda adalah C.\n");
		}else if (nilai > 60) {
			printf("Nilai Anda adalah D.\n");
        //Berfungsi untuk jika nilai kurang dari/sama dengan 60
		}else {
			//Menampilkan nilai yang didapatkan jika nilai kurang dari/sama dengan 60
			printf("Nilai Anda adalah E.\n");
		}
		printf("\nProgram Selesai");
    //Berfungsi untuk jika nilai kurang dari/sama dengan 0 atau lebih dari 100
	}else {
		//Menampilkan pesan bahwa nilai tidak valid0
		printf("Input tidak valid. Nilai harus berada dalam rentang 0 hingga 100.\n");
	}
	return 0;
}