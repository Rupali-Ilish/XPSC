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
        ll n; cin>>n;
        vector<ll>v(n+1);
        for(ll i=1;i<=n;i++) cin>>v[i];
        ll cnt=0;
        for(ll i=1;i<=n;i++)
        {
            if(v[i]==1)
            {
                cnt+=n;
                continue;
            }
            ll power=1;
            for(ll j=1;j<=n;j++)
            {
                if(power*v[i]>1e9) break;
                else if(power*v[i]<=v[j]) cnt++;
                power=power*v[i];
                //cout<<"power "<<power<<endl;
            }
        }
        cout<<cnt<<endl;
    }
}