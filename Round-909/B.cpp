#include <bits/stdc++.h>
using namespace std;

#define int long long int
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
    int a[n];
    int ans=-1000009;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cur=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans, a[i]);
        if(i>0)
        {
            if(abs(a[i])%2 != abs(a[i-1])%2)
            {
                cur+=a[i];
                //cout<<cur<<endl;
                ans=max(ans, cur);
                if(cur<0)
                {
                    cur=0;
                }
            }
            else
            {
                cur=a[i];
            }
        }
        else
        {
            cur=a[i];
        }
        //cur+=a[i];
        ans=max(ans, cur);
        if(cur<0)
        {
            cur=0;
        }

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

