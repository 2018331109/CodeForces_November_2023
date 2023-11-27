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
    string s;
    int ans=0;
    cin>>s;
    int cnt=0;
    int f=0;
    int ff=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='.')
        {
            cnt++;
            f=1;
        }
        else if(f==1)
        {
            if(cnt>=3)
            {
                ff=1;
                break;
            }
            if(cnt<=2)
            {
                ans+=cnt;
            }
            cnt=0;
        }
    }
    if(cnt>=3)
    {
        ff=1;
    }
    else
    {
        ans+=cnt;
    }
    if(ff)
    {
        cout<<2<<endl;
        return;
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

