#include <iostream>
using namespace std;

int main() {
    int ERNAN_abjad = 26; 
    string Huruf[26] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

    cout << endl;
    cout << " Menampilkan abjad a - c " << endl;
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~ " << endl;

    for (int i = 0; i < ERNAN_abjad; i++)
	{
        cout << " abjad -" << i+1 <<" : " << Huruf [i]<< endl;
    }
    cout << endl;
cin.get();
}
