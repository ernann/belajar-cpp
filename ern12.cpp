#include <iostream>
using namespace std;

int main() {
    cout << "\n      Penjualan Rokok di Toko A     \n"
         << "            Dalam 1 Hari            \n\n"
         << "Daftar Harga:\n";
    for (int i = 1; i <= 5; i++) 
        cout << i << " harga " << i * 1000 << endl;

    double penjualan = 750000;
    cout << "\nKategori Penjualan: ";
    if (penjualan >= 1000000)
        cout << "Sangat Tinggi" << endl;
    else if (penjualan >= 500000)
        cout << "Tinggi" << endl;
    else if (penjualan >= 250000)
        cout << "Sedang" << endl;
    else
        cout << "Rendah" << endl;

    return 0;
}
