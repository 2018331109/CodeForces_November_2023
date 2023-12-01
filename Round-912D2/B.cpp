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

    vector<vector<int>> v(n, vector<int>(n, 0));
    vector<int> ans;
    bool f = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[j][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int x = -1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                x &= v[j][i];
            }
        }

        if (f)
        {
            for (int j = 0; j < i; ++j)
            {
                if ((ans[j] | x) != v[j][i])
                {
                    f = 0;
                }
            }
            ans.push_back(max(x, (int)0));
        }
    }

    if (f)
    {
        yes;
        for (int it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    else
    {
        no;
    }

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

