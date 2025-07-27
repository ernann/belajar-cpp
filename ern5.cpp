#include <iostream>
using namespace std;

int main() {

	int P;
    cout << "Pilih paket internet:"<< endl;
    cout << "1 = a. Paket Harian"<< endl;
    cout << "2 = b. Paket Mingguan"<< endl;
    cout << "3 = c. Paket Bulanan"<< endl;
    cout << "Pilih menu (a/b/c):"; cin >> P;
    if (P == 1)
        cout << "Anda memilih Paket Harian"<< endl;
	else
        if (P == 2)  
            cout << "Anda memilih Paket Mingguan"<< endl;
        else
            if (P == 3)
                cout << "Anda memilih Paket Bulanan"<< endl;
            else
			    cout << "Invalid menu"<< endl;
cin.get();
}
