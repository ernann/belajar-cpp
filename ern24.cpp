#include <iostream>
using namespace std;
int E[10][10], R[10][10], N[10][10];
int iE,iR,jE,jR;

int main() 
{
    int i,j,k;
    cout << endl;
	cout << "  Menampilkan ARRAY/LARIK Multi Dimensi "   << endl;
	cout << " Menentukan Besar Baris dan Kolom Matriks E " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Masukan Jumlah Baris Matriks E = "; cin >> iE;
	cout << " Masukan Jumlah Kolom Matriks E = "; cin >> jE;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Masukan Jumlah Baris Matriks R = ";cin >> iR;
	cout << " Masukan Jumlah Kolom Matriks R = ";cin >> jR;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << " Menginput Isi Elemen Array Matriks E " <<endl;
	for (i=0; i<iE; i++)         { 
	    for ( j=0; j<jE; j++)    {
			cout <<" Masukan Isi Elemen ["<<i+1<<"]["<<j+1<<"]: ";
			cin >> E[i][j]; }  }
    cout << endl;
	cout << " Menginput Isi Elemen Array Matrika R " << endl; 
	for (i=0; i<iR; i++)         { 
		for (j=0; j<jR; j++)     {
            cout << "Masukan Isi Elemen ["<<i+1<<"]["<<j+1<<"]: ";
		    cin >> R[i][j]; }  }
	cout << endl; 
	cout << endl;
	cout << " Tampilan Isi Elemen Array Matriks E" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	for ( i=0; i<iE; i++)     {
		for (j=0; j<jE; j++)
            cout << E [i][j]<< "  ";
		    cout << endl;     }
	cout << endl;
	    cout << endl;
        cout << " Tampilan Isi Elemen Array Matriks R" << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
        for (i=0; i<iR; i++)    {
			for (j=0; j<jR; j++)
				cout << R[i][j] << "  ";
			    cout << endl;  }
		//Perkalian Matriks
		for ( i =0; i<iE; i++)
			for ( j =0; j<jR; j++) 
				for ( k =0; k<jE; k++)
				{
                    N[i][j] = N[i][j] + E[i][k] * R[k][j]; 
				}
        cout << endl;
		cout << endl;
		cout << " Tampilan Hasil Kali Dua Matriks " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	    for (i=0; i<iE; i++) 
		{
			for (j=0; j<jR; j++) 
			{
				cout << N[i][j] << "   ";
			}
			cout << endl;
		}
    cin.get();
}
