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
    ll l=0,r=0,in=0;
    while(l<n and r<m)
    {
        if(a[l]<=b[r])
        {
            ans[in]=a[l];
            l++;
        }
        else
        {
            ans[in]=b[r];
            r++;
        }
        in++;
    }
    while(l<n)
    {
        ans[in]=a[l];
        l++;
        in++;
    }
    while(r<m)
    {
        ans[in]=b[r];
        r++;
        in++;
    }
    for(auto it: ans) cout<<it<<" ";
    cout<<endl;
}

