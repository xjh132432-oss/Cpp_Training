// 

#include <iostream>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    int d = 0;
    long long t = x;

    while (t)
    {
        d++;
        t /= 10;
    }

    long long p = 1;
    for (int i = 0; i < d; i++)
    {
        p *= 10;
    }

    long long y = x * p + x;

    cout << y << '\n';

    return 0;
}