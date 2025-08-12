#include <iostream>
using namespace std;

int main() {
    int jumlahPetugas;

    cout << "Masukkan jumlah petugas: ";
    cin >> jumlahPetugas;

    for (int i = 1; i <= jumlahPetugas; i++) {
        float honor[4];
        float totalHonor = 0;

        cout << "Masukkan honor mingguan petugas ke-" << i << " (4 nilai):\n";
        for (int j = 0; j < 4; j++) {
            cout << "  Minggu " << (j + 1) << ": ";
            cin >> honor[j];
            totalHonor += honor[j]; // Menjumlahkan honor
        }

        float rataRata = totalHonor / 4.0f; // Menghitung rata-rata
        cout << "Honor rata-rata petugas ke-" << i << " per bulan: " << rataRata << endl;
    }
	
    return 0;
}
