#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << endl;
	cout << "           Menampilkan Angka 1 s.d 7" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "Masukkan Angka [1/2/3/4/5/6/7] = " ; cin >> N;
	cout<< endl;
	switch (N)
	{ 
	    case 1: cout << "SATU" << endl; break;
		case 2: cout << "DUA" << endl; break;
		case 3: cout << "TIGA" << endl; break;
		case 4: cout << "EMPAT" << endl; break;
		case 5: cout << "LIMA" << endl; break;
		case 6: cout << "ENAM" << endl; break;
		case 7: cout << "ENAM" << endl; break;
	  default : cout << "Angka Tidak VALID" << endl;
	}
cin.get();
}
