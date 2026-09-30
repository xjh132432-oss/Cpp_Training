#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    long long k;

    cin >> n >> k;

    vector<int> a(n);
    vector<int> cnt(n + 1, 0);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    long long pairs = 0;
    int ans = n + 1;

    for(int r = 0; r < n; r++)
    {
 
        pairs += cnt[a[r]];
        cnt[a[r]]++;

   
        while(pairs >= k)
        {
            ans = min(ans, r - l + 1);

         
            cnt[a[l]]--;
            pairs -= cnt[a[l]];

            l++;
        }
    }

    if(ans == n + 1)
        cout << -1 << '\n';
    else
        cout << ans << '\n';

    return 0;
}