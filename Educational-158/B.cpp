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
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int mx=0, s=0;
    int ans=0;
    a[0]=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]!=0)
        {
            //mx=max(mx, a[i]);
            //cout<<mx<<endl;
            if(a[i]>a[i-1])
            {
                ans+=(a[i]-a[i-1]);
            }
        }

        //cout<<ans<<endl;
    }

    if(a[1])
    {
        ans--;
    }

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

