// Import library
#include <stdio.h>  // Standart input output -> printf scanf
#include <stdlib.h> // Standart Library -> digunakan untuk memanggil function system()
#include <string.h> // Untuk memanipulasi string termasuk strcpy, input %s, dll

int main(){
	// Bersihkan konsol, cls = untuk windows, clear = untuk linux
	system("cls||clear"); // Function system() membutuhkan library <stdlib.h>
	
	// Deklarasi nama dengan tipe data "char", panjang array 125, berfungsi untuk menampung nama sementara
	char nama[125];
	// Deklarasi banyak_data dengan tipe data "int", berfungsi untuk menampung jumlah kumpulan nama
	int banyak_data;
	
	// Tampilkan kata kata untuk input
	printf("Ada berapa banyak data? [1..100] ");
	// Proses input -> banyaknya_data
	scanf("%d", &banyak_data);
	
	// Kondisi, jika input melebihi / kurang dari 1 - 100
	if(banyak_data < 1 && banyak_data > 100){
		// Maka : exit dengan return value (mengembalikan nilai) 1
		exit(1);
	}
	
	// Deklarasi data_nama dengan tipe data "char", menggunakan array 2 dimensi
	// Setiap 1 dimensi memiliki panjang array 125, berfungsi untuk menampung nama
	char data_nama[banyak_data][125];

	// Deklarasi i dengan tipe data "int", variable ini hanya untuk perulangan (looping)
	// Variable ini bersifat temporary variable
	int i;

	// Baris baru
	printf("\n");

	// Perulangan untuk input
	for(i=0; i<banyak_data; i++){
		// Tampilkan kata kata untuk input
		printf("Input nama ke-%d : ", i+1);
		// Proses input -> nama
		scanf(" %[^\n]s", nama);
		
		// Proses memasukkan nama -> data_nama[i]
		strcpy(data_nama[i], nama);
	}

	// Bersihkan konsol, cls = untuk windows, clear = untuk linux
	system("cls||clear"); // Function system() membutuhkan library <stdlib.h>

	// Tampilkan kata kata untuk memperbagus tampilan saja
	printf("Hasil dari input sebelumnya :\n\n");

	// Proses Menampilkan nama setelah input di atas
	for(i=0; i<banyak_data; i++){
		printf("Nama : %s\n", data_nama[i]);
	}

	// Kembalikan nilai 0
	return 0;
}
