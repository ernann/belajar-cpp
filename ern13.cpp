#include <iostream>
using namespace std;

// Fungsi rekursif untuk menampilkan data rokok
void displayRokok(int index, const char* rokok[][4], int size) {
    // Basis kasus untuk menghentikan rekursi
    if (index >= size) {
        return;
    }

    // Menampilkan data rokok
    cout << "Rokok " << rokok[index][0] << " terjual " << rokok[index][1] 
         << " total Rp." << rokok[index][2] << endl;

    // Panggil fungsi rekursif untuk index berikutnya
    displayRokok(index + 1, rokok, size);
}

// Fungsi untuk memeriksa harga rokok dan memberikan rekomendasi
void checkHarga(int harga) {
    // Selection (if-else) untuk memberikan rekomendasi
    if (harga < 50000) {
        cout << "Rokok ini tergolong murah." << endl;
    } else if (harga >= 50000 && harga < 80000) {
        cout << "Rokok ini tergolong menengah." << endl;
    } else {
        cout << "Rokok ini tergolong mahal." << endl;
    }
}

int main() {
    // Array 2 dimensi untuk menyimpan data rokok
    const char* rokok[5][4] = {
        {"Magnum", "4", "70000"},
        {"Sampoerna", "3", "50000"},
        {"Surya", "2", "40000"},
        {"Jarum", "4", "80000"},
        {"Mild", "5", "100000"}
    };

    // Menampilkan data rokok menggunakan fungsi rekursif
    cout << "Daftar Penjualan Rokok:" << endl;
    displayRokok(0, rokok, 5);

    // Menggunakan repetition (for) untuk memeriksa harga setiap rokok
    cout << "\nRekomendasi Harga:" << endl;
    for (int i = 0; i < 5; ++i) {
        int harga = atoi(rokok[i][2]); 
        cout << "Rokok " << rokok[i][0] << ": ";
        checkHarga(harga); 
    }

    return 0;
}
