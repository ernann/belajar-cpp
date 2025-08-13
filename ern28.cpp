#include <iostream>
using namespace std;

int input ();
int kali ();
int tampil (int hasil[10][10]);
int a[10][10], b[10][10];
int i, j, k, l; // i, j adalah ordo matriks A; k, l adalah ordo matriks B

int main() {
    int pilih;
    input();
    do {
        cout << "Perintah ARRAY/LARIK Multi Dimensi " << endl;
        cout << "        Menu Oprasi Matriks        " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "  1. Perkalian Matriks             " << endl;
        cout << "  2. Keluar                        " << endl;
        cout << " Pilihan Anda :                    " << endl;
        cin >> pilih;
        switch (pilih) {
            case 1:
                kali();
                break;
            case 2:
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilih != 2);
}

int input() {
    int c, d;
    cout << "Masukkan Ordo Matriks A: " << endl;
    do {
        cout << "Jumlah Baris (A): "; cin >> i;
    } while (i >= 11);
    do {
        cout << "Jumlah Kolom (A): "; cin >> j;
    } while (j >= 11);

    cout << "Masukkan Ordo Matriks B: " << endl;
    do {
        cout << "Jumlah Baris (B): "; cin >> k;
    } while (k >= 11);
    do {
        cout << "Jumlah Kolom (B): "; cin >> l;
    } while (l >= 11);

    // Pastikan jumlah kolom Matriks A sama dengan jumlah baris Matriks B
    if (j != k) {
        cout << "Ordo Matriks Tidak Sesuai untuk Perkalian!" << endl;
        exit(0); // Menghentikan program jika ordo tidak sesuai
    }

    // Input Matriks A
    cout << "Matriks A: " << endl;
    for (c = 0; c < i; c++) {
        for (d = 0; d < j; d++) {
            cout << "Masukkan Elemen [" << c + 1 << "][" << d + 1 << "] : ";
            cin >> a[c][d];
        }
    }

    // Input Matriks B
    cout << "Matriks B: " << endl;
    for (c = 0; c < k; c++) {
        for (d = 0; d < l; d++) {
            cout << "Masukkan Elemen [" << c + 1 << "][" << d + 1 << "] : ";
            cin >> b[c][d];
        }
    }
}

int kali() {
    int kalip[10][10] = {0}, c, d, e;

    // Perkalian Matriks
    for (c = 0; c < i; c++) {
        for (d = 0; d < l; d++) {
            for (e = 0; e < j; e++) { // j adalah jumlah kolom A dan baris B
                kalip[c][d] += a[c][e] * b[e][d];
            }
        }
    }

    // Tampilkan Hasil
    tampil(kalip);
}

int tampil(int hasil[10][10]) {
    int c, d;
    cout << "Hasil Operasi Matriks: " << endl;
    for (c = 0; c < i; c++) {
        for (d = 0; d < l; d++) {
            cout << hasil[c][d] << " ";
        }
        cout << endl;
    }
}
