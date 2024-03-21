//1. Mulai dari indeks 0 (j) dibandingkan dengan indeks j + 1 (i). Jika j > i, maka posisinya ditukar dan lanjut hingga indeks terakhir
// (n - 1) sampai j adalah bilangan yang paling besar. Lalu mengulang kembali dari indeks 0 dengan proses yanng sama sehingga semua
//  bilangannya urut. Namun jika j < i, makan tidak usah ditukar dan posisi j langsung diganti ke j + 1.

//2. Dengan membagi menjadi beberapa kelompok indeks dengan inkremen sesuai jumlah kelompoknya. Lalu masing masing kelompok diurutkan
// dari bilangan terkecil hingga terbesar. Jika sudah maka semua kelompok tadi digabungkan kembali menjadi 1, jika belum urut semuanya
// maka dibagi lagi menjadi kelompok yang lebih sedikit, lalu diurutkan kembali seperti proses pertama dan jika sudah digabungkan kembali
// hingga semua bilangan pada indeks sudah urut.

//3. Selection Sort. Karena selection sort langsung memilih bilangan terkecil pada indeks(i) lalu ditukar posisinya dengan
// indeks j



#include <iostream>
using namespace std;

int ruz[13], min_index;
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 13)
			break;
		else {
			cout << "Array dapat mempunyai maksimal 13 elemen. \n";
		}

	}
	cout << endl;
	cout << "=======================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "=======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> ruz[i];
	}


}


void SelectionSort() {
	do {
		for (int j = 0; j <= n - 2; j++) {
			min_index = j;
			do {
				for (int i = j + 1; i = n - 1; i++) {
					min_index = i;
				}
			}
		}

	}
}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Elemen array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << ruz[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
}

int main()
{
	input();
	SelectionSort();
	display();
	system("pause");

	return 0;

}

