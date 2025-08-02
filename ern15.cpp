#include <iostream>
using namespace std;

void cetakRokok(const int data[][3], int totalRokok, int &totalHarga) {
    for (int i = 0; i < totalRokok; i++) {
        int jumlahTerjual = data[i][1];
        int hargaPerBungkus = data[i][2];
        int total = jumlahTerjual * hargaPerBungkus;

        cout << " Rokok kode " << data[i][0]
             << " terjual " << jumlahTerjual
             << " total Rp " << total << endl;

        totalHarga += total;
    }
}

int main() {
    // Array 2 dimensi: [Kode Rokok, Jumlah Terjual, Harga Per Bungkus]
    int data[5][3] = {
        {1, 4, 30000},
        {2, 3, 46000}, 
        {3, 3, 39000}, 
        {4, 4, 27000}, 
        {5, 5, 36000}  
    };

    const char* namaRokok[] = {"Magnum", "Marlboro", "Surya", "Gudang Garam Filter", "Mild"};

    cout << "              Penjualan rokok toko X         " << endl;
    cout << "                  dalam 1 hari               " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;

    cout << " Harga per bungkus: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << " " << namaRokok[i] << ": Rp " << data[i][2] << endl;
    }
    cout << endl;

    int totalPenjualan = 0, totalHarga = 0;

    for (int i = 0; i < 5; i++) {
        totalPenjualan += data[i][1];
    }

    cetakRokok(data, 5, totalHarga);

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
