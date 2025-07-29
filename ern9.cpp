#include <iostream>
using namespace std;

int main()
{
	const int JumtDt=5;
	int Nilai [JumtDt] = {1,2,6,24,120};
	int i, Total=0;
	cout << endl;
	cout << "Menginput faktorial " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (i=0; i < JumtDt; i++)
	{
		cout << " Isi Elemen faktorial" << i+1 <<" : " << Nilai [i]<< endl;
		Total = Total + Nilai [i];
		
	}
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Total dari Penjumlahan = " << Total << endl;
	cin.get();
}
