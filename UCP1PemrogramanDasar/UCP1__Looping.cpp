#include <iostream>
using namespace std;

int Tanggerang, Bekasi;
int jTanggerang = 3, jBekasi = 3;
string nama;

void input() {
	cout << "Masukan Nama Kota";
	cin >> nama;
}

int status() {
	return(Tanggerang * jTanggerang) + (Bekasi * jBekasi);
}

void display() {
	cout << "Nama Kota : " << nama << endl;
	cout << "Total Lokasi di Tanggerang : " << Tanggerang << endl;
	cout << "Total Lokasi di Bekasi : " << Bekasi << endl;
	cout << "Total Jumlah Semua Lokasi : " << status() << endl;
}

int main() {
	char pilihan;
	do {
		input();
		status();
		display();

		cout << "apakah ingin memeriksa kembali? (y/n)";
		cin >> pilihan;

		system("cls");
	} while (pilihan == 'y' || pilihan == 'Y');
}