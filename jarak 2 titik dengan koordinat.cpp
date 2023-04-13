#include <iostream>
#include <cmath>  
using namespace std;

void jarak(double x1, double y1, double x2, double y2)
{
	double D;
    D = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout<<D;
}

int main()
{
    int x1, y1, x2, y2;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    jarak(x1, y1, x2, y2);

    return 0;
}
