#include <iostream>
using namespace std;

struct Mahaiswa {
	string nim;
	string nama;
	string alamat;
	int umur
};
int main()
{
	Mahaiswa mhs1, mhs2;

	mhs1.nim = "20220140152";
	mhs1.nama = "Alfandi";
	mhs1.alamat = "banyumas";
	mhs1.umur = 19;

	cout << "Masukkan nim: ";
	cin >> mhs2.nim;
	cout << "Masukkan nama: ";
	cin >> mhs2.nama;
}