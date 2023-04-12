#include <iostream>

using namespace std;

void vPtr(void *ptr, char type) {
    if(type == 'i') {
    	/* operator static_cast digunakan untuk mengubah
		tipe data dari suatu nilai ke tipe data yang lain*/
        int* intPtr = static_cast<int*>(ptr);
        for(int i = 0; i < *intPtr; i++) {
            cout << "ing" << endl;
        }
    } else if(type == 'c') {
        char* charPtr = static_cast<char*>(ptr);
        cout << "ceng " << *charPtr << endl;
    }
}

int main() {
    char b = 'k';
    void* x = &b;
    vPtr(x, 'c');

    int a = 3;
    void* y = &a;
    vPtr(y, 'i');
    return 0;
}

/* static_cast digunakan untuk mengubah tipe data 
dari variabel bertipe void* yang disimpan di dalam 
variabel ptr menjadi tipe data pointer ke int, 
kemudian hasilnya disimpan dalam variabel pointer 
intPtr yang bertipe int* */
