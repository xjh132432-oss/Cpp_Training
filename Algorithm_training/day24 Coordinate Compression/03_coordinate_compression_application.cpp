#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> segments(n);
    vector<int> xs;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        segments[i] = {l, r};

        xs.push_back(l);
        xs.push_back(r);
    }


    sort(xs.begin(), xs.end());


    xs.erase(
        unique(xs.begin(), xs.end()),
        xs.end()
    );


    vector<int> diff(xs.size(), 0);


    for (auto [l,r] : segments)
    {
        int left = lower_bound(
            xs.begin(),
            xs.end(),
            l
        ) - xs.begin();

        int right = lower_bound(
            xs.begin(),
            xs.end(),
            r
        ) - xs.begin();

        diff[left]++;
        diff[right]--;
    }


    long long answer = 0;
    int cover = 0;

    for (int i = 0; i + 1 < xs.size(); i++)
    {
        cover += diff[i];

        if(cover>0)
        {
            answer+= xs[i + 1] - xs[i-1];
        }
    }

    cout << answer << endl;

    return 0;
}