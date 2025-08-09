#include <iostream>
using namespace std;

int main() {
    int A_ern [3][2], B_ern [3][2], Hasil [3][2];
    cout << " Masukkan elemen matriks A :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << " A_ern [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A_ern[i][j];
        }
    }
    cout << " Masukkan elemen matriks B :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << " B_ern [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B_ern[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            Hasil[i][j] = A_ern[i][j] + B_ern[i][j];
        }
    }
    cout << "Hasil penjumlahan matriks A+B :" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << Hasil[i][j] << " ";
        }
        cout << endl;
    }
cin.get();
}
