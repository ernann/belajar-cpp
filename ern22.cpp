#include <iostream>
using namespace std;

int main()
{
	int Nilai_ern[4][4];
	int i, j;
	cout << endl;
	cout << "Menampilkan ARRAY/LARIK 2 Dimensi" << endl;
	cout << " Dengan Ordo 4x4 Melalui Inputan " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << endl;
	for (i=0; i<4; i++)      
	{
		for (j=0; j<i+1; j++)  
		{
			cout << "Masukkan Isi Elemen["<<i+1<<"]["<<j+1<<"] : ";
	        cin >> Nilai_ern[i][j];    
        }			
	}
	cout << endl;
	cout << "Tampilkan Isi Elemen" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	for (i=0; i<4; i++)    
	{ 
	    for (j=0; j<i+1; j++)
		
			cout << Nilai_ern[i][j]  << "   ";
            cout << endl;      
	}
cin.get();
}		 
