#include <iostream>
#define kecil ((a < b)? a : b)
using namespace std ;
int main(){

  int a, b;
  
  cout << "Masukan digit ke-9 NPM Anda : " ;
  cin >> a ;
  cout << "Masukan digit ke-10 NPM Anda : " ;
  cin >> b ;

  cout << endl << "Bilangan terkecil dari " << a << " dan " << b << " adalah : " << kecil ;

  return 0;
}
