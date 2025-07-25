#include <iostream>
using namespace std;

int main() {
    int nilaiUjian;

    cout << "Masukkan nilai ujian: " << endl;
    cin >> nilaiUjian;

    if (nilaiUjian < 60) {
        cout << "Tidak lulus" << endl;
    } else {
        cout << "Lulus" << endl;
    }

  cin.get();
}
