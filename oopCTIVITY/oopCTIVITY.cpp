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
	