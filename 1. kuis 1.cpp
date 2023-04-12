#include <iostream>
#include <unordered_set>

using namespace std;

bool TwoSum(int nums[], int n, int k) {
	
	//untuk menyimpan setiap bilangan dalam array
    unordered_set<int> set ;
    
    for (int i = 0; i < n; i++) {
        int complement = k - nums[i];
        
        /* 'set.find(complement)' untuk mencari
		apakah nilai 'complement' sudah ada di dalam set 'set'*/
        
		/* 'set.find()'
		digunakan untuk mencari apakah ada bilangan 
		yang dapat dipasangkan dengan nums[i] 
		untuk menghasilkan nilai k */
		
		/* 'set.end()' digunakan untuk mengecek
		apakah nilai complement
		tidak ditemukan di dalam set. */
		
        if (set.find(complement) != set.end()) {
            return true;
        }
        set.insert(nums[i]);
    }
    return false;
}

int main() {
    int n ;
    cout << "Masukan panjang array : " << endl;
    cin >> n ;
	int k ;
    
	int* nums = new int [n]; //alokasi memori dinamis
    
	cout << "Masukan isi array : " << endl;
	
	for (int i=0 ; i<n ; i++){
		cin >> nums[i] ;
	}
	
    cin >> k ;
    TwoSum (nums, n, k);
    cout << TwoSum(nums, n, k) << endl;

	delete[] nums; //dealokasi memori
    return 0;
}

