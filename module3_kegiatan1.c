#include <stdio.h>

enum Makanan {
	NasiGoreng = 1,
	MieGoreng,
	AyamGoreng,
    PentolPakJio,
    GeprekMakJami
};

enum Minuman {
	AirMineral = 1,
	EsTeh,
	JusJeruk,
    AnggurMerah,
    STMJ
};

int main(){
	int pilihMakan;
	printf("===== Rumah Makan =====\n");
	printf("Menu Makanan:\n");
	printf("1. Nasi Goreng      Rp. 50.000\n");
	printf("2. Mie Goreng       Rp. 45.000\n");
	printf("3. Ayam Goreng      Rp. 65.000\n");
    printf("4. Pentol Pak Jio   Rp. 75.000\n");
    printf("5. Geprek Mak Jami  Rp. 85.000\n");
	printf("Pilih menu makanan (1-5): ");
	scanf("%d", &pilihMakan);
	enum Makanan makan;
	if (pilihMakan == 1) {
		makan = NasiGoreng;
	}else if (pilihMakan == 2) {
		makan = MieGoreng;
	}else if (pilihMakan == 3) {
		makan = AyamGoreng;
	} else if(pilihMakan == 4) {
        makan = PentolPakJio;
    } else if(pilihMakan == 5) {
        makan = GeprekMakJami;
    } else {
        printf("Anda hanya dapat memilih dari 1-5");
        return 0;
    }
	float hargaMakan;
	switch(makan) {
		case 1:
			hargaMakan = 50000;
			break;
		case 2: 
			hargaMakan = 45000;
			break;
		case 3: 
			hargaMakan = 65000;
			break;
        case 4:
            hargaMakan = 75000;
            break;
        case 5:
            hargaMakan = 85000;
            break;
	}

	int pilihMinum;
	printf("\n\nMenu Minuman:\n");
	printf("1. Air Mineral      Rp. 13.000\n");
	printf("2. Es Teh           Rp. 15.000\n");
	printf("3. Jus Jeruk        Rp. 20.000\n");
    printf("4. Anggur Merah     Rp. 25.000\n");
    printf("5. STMJ             Rp. 30.000\n");
	printf("Pilih menu minuman (1-5): ");
	scanf("%d", &pilihMinum);
	enum Minuman minum;
	if (pilihMinum == 1) {
		minum = AirMineral;
	}else if (pilihMinum == 2) {
		minum = EsTeh;
	}else if (pilihMinum == 3) {
        minum = JusJeruk;
    } else if(pilihMinum == 4) {
        minum = AnggurMerah;
    } else if(pilihMinum == 5) {
        minum = STMJ;
	}else {
		printf("Anda hanya dapat memilih dari 1-5");
	}
	float hargaMinum;
	switch(minum) {
		case 1:
			hargaMinum = 13000;
			break;
		case 2: 
			hargaMinum = 15000;
			break;
		case 3: 
			hargaMinum = 20000;
			break;
        case 4 :
            hargaMinum = 25000;
            break;
        case 5 :
            hargaMinum = 30000;
            break;
	}
	
	char apakahMember;
	float TotalBiaya;
	printf("\n\nApakah Anda adalah member? (Y/N): ");
	scanf("%s", &apakahMember);
	if (apakahMember == 'y') {
		TotalBiaya = (hargaMakan + hargaMinum) * 0.9;
		printf("\nTotal harga: Rp. %.2f", TotalBiaya);
	}else if (apakahMember == 'n'){
		TotalBiaya = hargaMakan + hargaMinum;
		printf("\nTotal harga: Rp. %.2f", TotalBiaya);
	}else {
		printf("\nHanya dapat input Y/N.");
		return 0;
	}
	
	float uangBayar;
	printf("\nAlamat memori variabel total: ");
	printf("\nMasukkan uang pembayaran: ");
	scanf("%f", &uangBayar);
 	
	if (uangBayar < TotalBiaya) {
		printf("\nUang pembayaran anda kurang.");
		return 0;
	}else if (uangBayar > TotalBiaya) {
		float uangKembali = uangBayar - TotalBiaya;
		printf("\nKembalian Anda: Rp. %.2f", uangKembali);
		return 0;
	}else {
		printf("\nTerima kasih telah membeli");
	}
	
	
	return 0;
}