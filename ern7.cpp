#include <iostream>
using namespace std;

int main ()
{
	int a_ern,b_ern,n_ern;
	cout << endl;
	cout << "     Menampilkan Pengulangan 3X(a_ern) dan 5X(b_ern)" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	n_ern = 0;
	for (a_ern = 1; a_ern <=3; a_ern++)
		for (b_ern = a_ern; b_ern <=5; b_ern++)
			n_ern = n_ern +7;
		    cout << " Nilai Akhir dari n_ern Adalah " << n_ern << endl;
	cin.get();
}
