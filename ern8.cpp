#include <iostream>
using namespace std;

int main() {
    for (int numErn = 2; numErn <= 50; numErn++) {
        bool isPrime = true;
        for (int i = 2; i * i <= numErn; i++) {
            if (numErn % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << numErn << " ";
        }
    }
cin.get();
}
