/*
Nama		: Ernan Wanasakti 
NPM 		: 4524210121
Kelas		: B
	Materi
	- Sequence
	- Selection
	- Repetition
	- Rekursif
	- Array
*/

#include <iostream>
using namespace std;

void cetakRokok(int ERNjumlah[5][2], const string ERNnama[5], int index, int totalRokok, int &totalHarga) {
    if (index >= totalRokok) return; 
    int total = ERNjumlah[index][0] * ERNjumlah[index][1];
    cout << " Rokok " << ERNnama[index] << " terjual " << ERNjumlah[index][0] 
         << " total Rp " << total << endl;

    totalHarga += total;
    cetakRokok(ERNjumlah, ERNnama, index + 1, totalRokok, totalHarga);
}

int main() {
    int ERNjumlah[5][2] = { {4,30000}, {3,46000}, {3,39000}, {4,27000}, {5,36000} };
    string ERNnama[5] = { "Magnum", "Marlboro", "Surya", "Gudang garam filter", "Mild" };

    cout << "         Laporan Penjualan rokok toko X         " << endl;
	cout << "                   dalam 1 hari                 " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
    cout << " Harga Magnum                : Rp 30000      " << endl;
	cout << " Harga Marlboro              : Rp 46000      " << endl;
	cout << " Harga Surya                 : Rp 39000      " << endl;
    cout << " Harga Gudang garam filter   : Rp 27000      " << endl;
	cout << " Harga Mild                  : Rp 36000      " << endl;
	cout << endl;

    int totalPenjualan = 0, totalHarga = 0;

    for (int i = 0; i < 5; i++) {
        totalPenjualan += ERNjumlah[i][0]; 
    }
    cetakRokok(ERNjumlah, ERNnama, 0, 5, totalHarga);
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << " Total rokok yang terjual : "   << totalPenjualan << endl;
    cout << " Total harga              : Rp" << totalHarga << endl;
	cout << endl;

    if (totalPenjualan > 20) {
		cout << " =============================== " << endl;
        cout << " |    PENJUALAN SANGAT BAIK!   | " << endl;
		cout << " =============================== " << endl;
    } else {
		cout << " =============================== " << endl;
        cout << " |PENJUALAN PERLU DITINGKATKAN!| " << endl;
		cout << " =============================== " << endl;
    }
    cin.get();
}
