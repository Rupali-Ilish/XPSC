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
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    
    ll l=0,r=0;
    ll ans=0;
    while(l<n and r<m)
    {
        ll cnt1=0,cnt2=0;
        ll val = a[l];
        while(a[l]==val and l<n)
        {
            cnt1++;
            l++;
        }
        while(val>b[r] and r<m)
        {
            r++;
        }
        while(b[r]==val and r<m)
        {
            cnt2++;
            r++;
        }
        ans+= cnt1*cnt2;
    }
    cout<<ans<<endl;
}

