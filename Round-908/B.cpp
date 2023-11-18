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
    int a[n];
    map<int, int>mp;
    map<int, vector<int>> v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        v[a[i]].pb(i);
    }

    int ans[n];
    int cnt=0;
    int f=0;
    int c=0;
    for(auto it:v)
    {
        if(it.second.size()>1)
        {
            //cout<<it.first<<endl;
            f++;
            c=0;
            for(auto iit:it.second)
            {
                if(c==0)
                {
                    ans[iit]=1;

                }
                else if(f==1)
                {
                    ans[iit]=2;
                }
                else
                {
                    ans[iit]=3;
                }
                c++;
            }
        }
        else
        {
            ans[it.second[0]]=1;
        }

    }

    if(f>=2)
    {
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
    }
    else
    {
        cout<<-1;
    }
    cout<<endl;
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

