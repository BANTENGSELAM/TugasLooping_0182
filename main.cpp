//libraru
#include <iostream>
using namespace std;

//variable
int angka;         //untuk angka
int pilihan;       // pilihan

//prosedur input
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

//untuk cek bi;l prima
bool isPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}