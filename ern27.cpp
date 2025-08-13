#include <iostream>
using namespace std;


void menaraHanoi(int n, char awal, char antara, char akhir) {
    if (n == 1) {
        cout << "Pindahkan cakram 1 dari " << awal << " ke " << akhir << endl;
        return;
    }

    menaraHanoi(n - 1, awal, akhir, antara);
    cout << "Pindahkan cakram " << n << " dari " << awal << " ke " << akhir << endl;
    menaraHanoi(n - 1, antara, awal, akhir);
}

int main() {
    int jumlahCakram = 4; 
    cout << "Langkah-langkah Menara Hanoi untuk " << jumlahCakram << " cakram:" << endl;
    menaraHanoi(jumlahCakram, 'A', 'B', 'C'); 
    return 0;
}
