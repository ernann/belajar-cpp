#include <iostream>
using namespace std;

int main()
{
	int Nilai_ern[3][4] = {{11,22,33,44}, {63,11,66,7}, {22,28,11,7}};
	int i_ern, j_ern;
	cout << endl;
	cout << "Menampilkan ARRAY/LARIK 2 Dimensi " << endl;
	cout << "       Dengan Ordo 3x4            " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << endl;
	for (i_ern=0; i_ern<3; i_ern++)
	{
		for (j_ern=0; j_ern<4; j_ern++)
			cout << Nilai_ern [i_ern] [j_ern] << "   ";
		    cout << endl;
	}
	cin.get();
	}
	
