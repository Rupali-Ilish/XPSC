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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(k),pre(k);
        for(ll i=0;i<k;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        pre[0]=n-v[0];
        for(ll i=1;i<k;i++) pre[i]=pre[i-1]+n-v[i];
        auto it= lower_bound(pre.begin(), pre.end(), n);
        ll ans= it-pre.begin();
        cout<<ans<<endl;
    }
}