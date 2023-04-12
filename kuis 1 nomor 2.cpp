#include <iostream>
using namespace std;

int rekursif(int angka, int x){
	
	if( x == 0 )
		return 1;
		else
		return angka*rekursif (angka, x-1);
	
}

int main(){
	
	int angka, x;
	cout << "Masukan digit ke-10 NPM Anda : ";
	cin >> angka ;
	cout << "Masukan digit ke-9 NPM Anda : ";
	cin >> x ;
	
	cout << "Hasil akhirnya adalah .... " << rekursif(angka, x) << endl;
	cout << endl;

/* jika variabel x berisi bilangan 0, maka hasilnya adalah 1
dalam kasus ini variabel angka tidak memiliki peran dalam hasil pangkat
karena kita tidak mengalikannya dengan bilangan lain termasuk dirinya sendiri.
Sehingga, hasil pangkatnya hanya 1.*/

}

