#include <iostream>
using namespace std;

void fib(int n)
{
	int sum= 0;
    int t1 = 0, t2 = 1, nextTerm = 0;
    
   
    for (int i = 3; i <= n; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return (t1 + t2);
  
    
}
int main()
{
    int n ;
	cin >> n;
    fib(n);

    return 0;
}
