#include <iostream>
#include <cmath>
using namespace std;

int kali_npm(int npm) {
    // Mengambil digit ke-10 NPM sebagai bilangan terakhir
    int last_digit = npm % 10;

    // Mengambil digit ke-9 NPM sebagai faktor pengali
    int second_last_digit = (npm / 10) % 10;

    // Basis rekursif
    if (second_last_digit == 0) {
        return last_digit;
    }

    // Rekursi dengan mengalikan digit ke-10 dengan faktor pengali
    return last_digit * pow(kali_npm(npm / 10), second_last_digit);
}

int main() {
    // Contoh penggunaan program dengan NPM 123456789
    int npm = 123456789;
    int hasil = kali_npm(npm);
    cout << hasil << endl;

    return 0;
}
