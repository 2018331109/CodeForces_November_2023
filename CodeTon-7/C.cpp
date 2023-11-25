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
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> a(n);
    vector<int> b(n);
    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end(), greater<pair<int, int>>());
    sort(b.begin(), b.end(), greater<int>());

    int i = 0, j = n - x;
    while (j < n)
    {
        if (a[i].first <= b[j])
        {
            no;
            return;
        }
        ans[a[i].second] = b[j];
        i++;
        j++;
    }

    i = x;
    j = 0;
    while (i < n)
    {
        if (a[i].first > b[j])
        {
            no;
            return;
        }
        ans[a[i].second] = b[j];
        i++;
        j++;
    }

    yes;
    for (int k = 0; k < n; k++)
    {
        cout << ans[k] << " ";
    }
    cout << endl;
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

