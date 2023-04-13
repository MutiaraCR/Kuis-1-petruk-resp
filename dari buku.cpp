#include<iostream>
using namespace std;

int fib(int n){if(n==0 || n<2)return n;
	else 
	return fib(n-1)+fib(n-2);
}

int main(){
	for(int N=0 ; N<=11 ; N++)
	cout<<fib(N)<<" ";
	return 0;
}
