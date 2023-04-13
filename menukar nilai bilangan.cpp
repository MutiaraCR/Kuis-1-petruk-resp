#include<iostream>
#include<cmath>
using namespace std;

void tukar(int a, int b, int c){
	cin>>a>>b>>c;
	
	if(a>b){
		swap(a,b);
	}
	if(b>c){
		swap(b,c);
	}
	if(a>b){
		swap(a,b);
	}
	
	cout<<a<<" "<<b<<" "<<c;
}

int main(){
	int a,b,c;
	
	tukar(a,b,c);
}
