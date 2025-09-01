#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	
	int percobaan;
	int barang;
	int jumlah[100];
	char nama[100][100];
	int harga[100];
	int hasil;
	
	fp = fopen("test2.txt", "r");
	
	fscanf(fp, "%d\n", &percobaan);
	
	for(int w = 0; w < percobaan; w++){
		fscanf(fp, "%d\n", &barang);
		hasil = 0;
		for(int p = 0; p < barang; p++){
			fscanf(fp, "%d#%[^@]@%d\n", &jumlah[p], &nama[p], &harga[p]);
		}
		for(int p = 0; p < barang; p++){
			hasil = hasil + (jumlah[p]*harga[p]);
//				printf(" Rp %d\n%d\n", harga[p], jumlah[p]);
		}
		hasil = hasil * 85 / 100;
		printf("Costumer #%d:", w+1);
		printf(" Rp %d\n", hasil);	
	}
	 
	
	
	fclose(fp);
	return 0;
}
