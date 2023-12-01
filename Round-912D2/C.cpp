#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;
int md = 998244353;

const int INF = 1e18;


void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int p = 0, pm = 0;

    for (int i = 0; i < n; ++i)
    {
        p += v[i];
        pm += v[i] * (i + 1);
    }

    int ans = pm;
    int j = 0;

    for (int i = 0; i < n; ++i)
    {
        if (pm >= pm - (p - v[i]))
        {
            pm -= v[i] * (i + 1 - j);
            p -= v[i];
        }
        else
        {
            pm = pm - (p - v[i]);
            ans -= (p - v[i]);
            pm -= v[i] * (i + 1 - j);
            j++;
            p -= v[i];
        }
    }

    cout << ans << endl;


}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

