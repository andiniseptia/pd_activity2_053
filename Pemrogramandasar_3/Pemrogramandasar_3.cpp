#include <iostream>
using namespace std;

float Luaspersegipanjang(float p, float l) {
	return p * l;
}

float Luassegitiga(float a, float t) {
	return 0.5 * a * t;
}

float LuasLingkaran(float r) {
	return 3.14 * r * r;
}

int main() {

	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;


	system("cls");

	do
	{
		cout << "\n\n_____________________" << endl;
		cout << "______M E N U______" << endl;
		cout << "_____________________" << endl;

		cout << "1. Luas Persegipanjang" << endl;
		cout << "2. Luas Segitiga" << endl;
		cout << "3. Luas Lingkaran" << endl;
		cout << "4. Exit" << endl;

		cout << "Masukan pilihan : ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			cout << "Masukan Panjang : ";
			cin >> panjang;
			cout << "Masukan Lebar : ";
			cin >> lebar;
			cout << "Masukan Luas Persegipanjang = " << Luaspersegipanjang(panjang, lebar);
			break;

		case 2:
			cout << "Masukan Alas : ";
			cin >> alas;
			cout << "Masukan Tinggi : ";
			cin >> tinggi;
			cout << "Luas Segitiga = " << Luassegitiga(alas, tinggi);
			break;

		case 3:
			cout << "Masukan jari-jari : ";
			cin >> jejari;
			cout << "Luas Lingkaran = "; << LuasLingkaran(jejari);
			break;

		case 4:

			break;
		default:
			cout << "Pilihan anda salah!";
			break;
		}
	} while (pilihan != 4);

}