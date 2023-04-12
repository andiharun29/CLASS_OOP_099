#include <iostream>
using namespace std;

class mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "masukkan nim : ";
		cin >> nim;
		cout << "masukkan nama : ";
		cin >> nama;
		cout << "masukkan nilai : ";
		cin >> nilai;
	}
	void printdata();
};

void mahasiswa::printdata() {
	cout << "\ndata mahasiswa";
	cout << "\nnim : " << nim;
	cout << "\nnamanya : " << nama;
	cout << "\nnilai : " << nilai;
}

class matakuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK() {
		cout << "\n\nmasukkan kode kuliah : ";
		cin >> kode;
		cout << "masukkan nama kuliah : ";
		cin >> namaMK;
		cout << "masukkan sks : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\ndata matakuliah";
		cout << "\nkode matakuliah : " << kode;
		cout << "\nnama matakuliah : " << namaMK;
		cout << "\nsks : " << sks;
	}
};

