#include <iostream>
using namespace std;

/* Prosedur multiplyMatrices()
digunakan untuk mengalikan dua matriks 
dengan memanfaatkan tiga buah nested loop */

void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], int r1, int c1, int r2, int c2) {
    // cek apakah jumlah kolom mat1 sama dengan jumlah baris mat2
    if (c1 != r2) {
        cout << "Perkalian matriks tidak dapat dilakukan" << endl;
        return;
    }

    // inisialisasi elemen matriks hasil dengan 0
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // perkalian matriks
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

/* Prosedur displayMatrix() 
digunakan untuk menampilkan matriks pada layar. */

void displayMatrix(int matrix[][10], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int r1, c1, r2, c2;

    cout << "Masukkan jumlah baris dan kolom matriks pertama: ";
    cin >> r1 >> c1;
    cout << "Masukkan elemen matriks pertama: " << endl;
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Masukkan jumlah baris dan kolom matriks kedua: ";
    cin >> r2 >> c2;
    cout << "Masukkan elemen matriks kedua: " << endl;
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    multiplyMatrices(mat1, mat2, result, r1, c1, r2, c2);
	
	cout << endl;
    cout << "Hasil perkalian matriks: " << endl;
    displayMatrix(result, r1, c2);

    return 0;
}

