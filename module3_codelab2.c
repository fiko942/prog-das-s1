#include <stdio.h>

//Berfungsi untuk membuat enum
enum Film {
	Action = 1,
	Horror,
	Thriller
};

int main(){
	//Membuat variabel
	int pilihan = 1;
	enum Film genre;
	
	//Menampilkan pesan untuk memilih 
	printf("Masukkan Nama Film\n");
	printf("1. Unstoppable\n");
	printf("2. Insidious\n");
	printf("3. Us\n");
	printf("Pilihan anda: ");
	//Mendapatkan 
	scanf("%d", &pilihan);
	
	//Berfungsi jika nilai yang di input adalah 1
	if (pilihan == 1) {
		//Untuk memilih member didalam enum menggunakan variabel
		genre = Action;
	}else if (pilihan == 2) {
		genre = Horror;
	}else if (pilihan == 3) {
		genre = Thriller;
    //Berfungsi jika nilai tidak valid
	}else {
		//Menampilkan pesan bahwa nilai yang di input tidak valid
		printf("\nHanya dapat memilih dari no 1-3.");
	}
	
	//Berfungsi untuk mendapatkan data dari variabel genre
	switch(genre){
		//Berfungsi jika nilai yang di input adalah 1
		case 1:
			//Menampilkan pesan bahwa no 1 bergenre Action
			printf("\nFilm Action");
			break;
		case 2:
			printf("\nFilm Horror");
			break;
		case 3:
			printf("\nFilm Thriller");
			break;
	}
	
	return 0;
}