#include <iostream>

using namespace std;

void BarisAritmatika(int awal, int selisih, int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        int bil = awal + i * selisih;
        if (bil < 0) {
            cout << "Not Found";
            return;
        }
        cout << bil;
        if (i < jumlah - 1) {
            cout << ", ";
        }
    }
}

void DeretAritmatika(int awal, int selisih, int jumlah) {
    int deret = (2 * awal + (jumlah - 1) * selisih) * jumlah / 2;
    if (awal < 0 || selisih < 0 || jumlah < 0){
            cout << " ";
            return;
        }
        cout << deret;
}

int main() {
    int awal, selisih, jumlah;
    cin >> awal >> selisih >> jumlah;

    BarisAritmatika(awal, selisih, jumlah);
    cout << endl;
    DeretAritmatika(awal, selisih, jumlah);

    return 0;
}

