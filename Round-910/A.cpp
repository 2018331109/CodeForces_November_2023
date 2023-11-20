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
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int b=0;
    int i;
    int f=0;
    for(i=n-1; i>=0; i--)
    {
        if(s[i]=='B')
        {
            b++;
        }

        if(b==k)
        {
            f=1;
            break;
        }
    }

    //cout<<f<<endl;
    i--;

    if(f==1)
    {
        while(i>=0)
        {
            if(s[i]=='B')
            {
                cout<<1<<endl;
                cout<<i+1<<" "<<'A'<<endl;
                return;
            }
            i--;
        }

        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
    int r=k-b;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            r--;
        }
        if(r==0)
        {
            cout<<i+1<<" "<<'B'<<endl;
            return;
        }
    }

    cout<<n<<" "<<'A'<<endl;
    return;

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

