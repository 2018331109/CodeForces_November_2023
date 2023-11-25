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
    string s;
    cin>>n>>s;
    int cnt=0;
    int last=n-1;
    int ans=0;
    int f=0;
    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='B' && f==0)
        {
            f=1;
            last=i;
        }
        if(s[i]=='A' && f==1)
        {
            ans+=(last-i);
            last=i;

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

