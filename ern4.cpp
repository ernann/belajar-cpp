#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << endl;
	cout << "         Menampilkan Nilai Yang Disukai" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
    cout << "Masukkan Nilai Yang Anda Sukai [1-7] = " ; cin >> N;
	if (N == 1)
	    cout << "SATU" << endl;
    else 
        if (N == 2)
			cout << "DUA" << endl;
		else 
			if ( N == 3) 
				cout << "TIGA" << endl;
			else 
				if ( N == 4)
					cout << "EMPAT" << endl;
				else
					if ( N == 5)
						cout << "LIMA" << endl;
					else
						if ( N == 6) 
							cout << "ENAM" << endl;
						else 
							if ( N == 7)
								cout << "TUJUH" << endl;
							else
								cout << "ANGKA TIDAK Valid" << endl;
cin.get();
}
