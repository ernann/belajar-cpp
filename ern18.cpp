#include <iostream>
using namespace std;

int main()
{
	const int Dataern =10;
	int Nilai [Dataern] = {80,70,50,65,85,70,60,55,90,72};
	int i, Total=0;
	int Rata_rata=0;
	cout << endl;
	cout << " Nilai Ujian Pemrograman I dari 10 Mahasiswa " << endl;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
	for (i=0; i < Dataern; i++)
	{
		cout << " Nilai yang dihasilkan-" << i+1 <<" : " << Nilai [i]<< endl;
		Total = Total + Nilai [i];
		Rata_rata = Total / Dataern;
		
	}
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Total dari Penjumlahan = " << Total << endl;
	cout << " Rata_rata              = " << Rata_rata << endl;
	cin.get();
}
	
