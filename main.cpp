//libraru
#include <iostream>
using namespace std;

//variable
int Angka;         //untuk angka
int Pilihan;       // pilihan

//prosedur input
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> Angka;
}

//untuk cek bi;l prima
bool bPrima(int n) {
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
bool bFibonacci(int n) {
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

// output bilangn prima
void outputPrima() {
    if (bPrima(angka))
        cout << angka << " adalah bilangan PRIMA\n";
    else
        cout << angka << " bukan bilangan PRIMA\n";
}

//output fibo
void outputFibonacci() {
    if (bFibonacci(angka))
        cout << angka << " adalah bilangan FIBONACCI\n";
    else
        cout << angka << " bukan bilangan FIBONACCI\n";
}

//untuk menu
void tampilMenu() {
    cout << "\n=== MENU ===\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
    cin >> pilihan;
}

//program utama
int main() {

    while (true) {
        tampilMenu();

        switch (pilihan) {
            case 1:
                inputAngka();
                outputPrima();
                break;

            case 2:
                inputAngka();
                outputFibonacci();
                break;

            case 0:
                cout << "Program selesai.\n";
                return 0;

            default:
                cout << "Pilihan tidak valid!\n";
        }
    }
}