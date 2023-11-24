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
    int ans=0;
    int s=0;
    int n, m;
    cin>>n>>m;
    int a[n+1];
    a[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        ans=max(ans, a[i]-a[i-1]);
    }

    ans=max(ans, 2*(m-a[n]));
    cout<<ans<<endl;
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

