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
    ll n,m; cin>>n>>m;
    vector<ll>a(n),b(m),ans(n+m);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    for(ll i=0;i<m;i++)
    {
        auto it= lower_bound(a.begin(), a.end(), b[i]);
        ll val= it - a.begin();
        cout<<val<<" ";
    }
    cout<<endl;
}

