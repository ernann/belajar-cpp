#include <iostream>
using namespace std;

int main() {
    char abjad[26];

    // Mengisi array dengan huruf a-z
    for (int i = 0; i < 26; i++) {
        abjad[i] = 'a' + i; // Karakter 'a' ditambah indeks
    }

    // Menampilkan isi array
    cout << "Abjad dari a sampai z:" << endl;
    for (int i = 0; i < 26; i++) {
        cout << abjad[i] << " ";
    }
    cout << endl;

    return 0;
}
