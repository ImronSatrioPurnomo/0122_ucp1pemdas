
#include <iostream>;
using namespace std;

int main() {
	//variabel
	float Tanggerang, nBekasi, Kondisi;
	string status;

	cout << "Masukan nama Kota : ";
	cin >> Tanggerang, nBekasi;

	Kondisi = (Tanggerang + nBekasi);

	if (Tanggerang >= 45) {
		status = "Tidak Sehat";
	}

	else if (nBekasi <= 45) {
		status = "Sehat";
	}
	cout << "Statusnya adalah : " << status << endl;

	system("Pause");
}

//Implementasi looping merujuk pada penggunaan struktur kendali perulangan dalam pemrograman untuk mengeksekusi serangkaian instruksi berulang kali. Terdapat beberapa jenis perulangan yang umum digunakan