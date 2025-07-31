#include <iostream>
#include <iomanip> // Untuk setw()
using namespace std;

void cetakRokok(int jumlah_ern[][2], const string nama_ern[], int index, int totalRokok, int &totalHarga) {
    if (index >= totalRokok) return;
    
    int total = jumlah_ern[index][0] * jumlah_ern[index][1];
    cout << " " << setw(20) << left << nama_ern[index]  // Nama rokok
         << setw(5) << right << jumlah_ern[index][0]  // Jumlah terjual
         << " bungkus "
         << setw(15) << right << "Rp " << setw(8) << total << endl; // Total harga

    totalHarga += total;
    cetakRokok(jumlah_ern, nama_ern, index + 1, totalRokok, totalHarga);
}

int main() {
    int jumlah_ern[5][2] = { {4,30000}, {3,46000}, {3,39000}, {4,27000}, {5,36000} };
    string nama_ern[5] = { "Magnum", "Marlboro", "Surya", "Gudang garam filter", "Mild" };

    // Header informasi toko
    cout << "              Penjualan rokok toko X         " << endl;
    cout << "                  dalam 1 hari               " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;
    cout << " Harga Magnum                : Rp 30000      " << endl;
    cout << " Harga Marlboro              : Rp 46000      " << endl;
    cout << " Harga Surya                 : Rp 39000      " << endl;
    cout << " Harga Gudang garam filter   : Rp 27000      " << endl;
    cout << " Harga Mild                  : Rp 36000      " << endl;
    cout << endl;

    int totalPenjualan = 0, totalHarga = 0;

    // Menghitung total rokok terjual
    for (int i = 0; i < 5; i++) {
        totalPenjualan += jumlah_ern[i][0];
    }

    // Header tabel
    cout << setw(20) << left << " Nama Rokok"
         << setw(15) << right << "Jumlah"
         << setw(20) << right << "Total Harga" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    // Cetak data penjualan
    cetakRokok(jumlah_ern, nama_ern, 0, 5, totalHarga);

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << " Total rokok yang terjual : " << totalPenjualan << endl;
    cout << " Total harga              : Rp" << totalHarga << endl;
    cout << endl;

    // Evaluasi penjualan
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
