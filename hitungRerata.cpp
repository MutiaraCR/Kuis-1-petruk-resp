#include<iostream>
using namespace std;

void hitungRerata()
{
    int N;
    double sum = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        double num;
        cin >> num;
        sum += num;
    }

    double avg = sum/ N;
    cout << avg;
}

int main()
{
    hitungRerata();

    return 0;
}

