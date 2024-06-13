#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define fix(n,val) fixed<<setprecision(n)<<val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int32_t main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        ll n,q; cin>>n>>q;
        multiset<ll>mini,maxi;
        vector<ll> v(n+1),ans(n+1);
        ll mn=0, mx=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>v[i];
            mini.insert(v[i]);
            mn+=v[i];
            if(i%2) //odd hoile
            {
                while(mini.size()>=maxi.size())
                {
                    ll val= *mini.rbegin();
                    mini.erase(--mini.end());
                    maxi.insert(val);
                    mn-=val;
                    mx+=val;
                }
                if(!mini.empty() and !maxi.empty())
                {
                    while(*mini.rbegin()> *maxi.begin())
                    {
                        ll x= *mini.rbegin();
                        ll y= *maxi.begin();
                        mn= mn-x+y;
                        mx= mx-y+x;
                        mini.erase(--mini.end());
                        maxi.erase(maxi.begin());
                        mini.insert(y);
                        maxi.insert(x);
                    }
                }
                ans[i]= mx-mn;
            }
        }
        while(q--)
        {
            ll k; cin>>k;
            cout<<ans[k]<<" ";
        }
        cout<<endl;
    }
}