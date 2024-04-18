#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v(n);
        map<ll,ll>m;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            m[__lg(v[i])]++; //__lg() function for leftmost set bit(1) index
        }
        ll ans=0;
        for(auto it: m)
        {
            ll pr= it.second;
            ans+= (pr*(pr-1))/2; //pair count
        }
        cout<<ans<<endl;
    }
}

