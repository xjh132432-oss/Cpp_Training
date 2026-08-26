#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> book(n + 1);

    unordered_map<int, int> count;


    for(int i = 1; i <= n; i++)
    {
        cin >> book[i];
        count[book[i]]++;
    }
    unordered_map<int, int> current;

    long long sum = 0;

    for(int i = 1; i <= n; i++)
    {
        current[book[i]]++;

        int total = count[book[i]];
        int pos = current[book[i]];

        if(total % 2 == 1 &&
           pos == (total + 1) / 2)
        {
            sum += i;
        }
    }

    cout << sum;

    return 0;
}