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

// fibonaci
bool isFibonacci(int n) {
    int a = 0, b = 1, c;

    while (a <= n) {
        if (a == n) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// output bilangan prima
void outputPrima() {
    if (isPrima(angka))
        cout << angka << " adalah bilangan PRIMA\n";
    else
        cout << angka << " bukan bilangan PRIMA\n";
}