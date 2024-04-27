#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
vector<ll>v;
ll n,w;
bool check(ll mid)
{
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]>=mid) break;
        else
        {
            sum+=mid-v[i];
            if(sum>w) return false;
        }
    }
    return true;
}
int main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        cin>>n>>w;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            v.pb(x);
        }
        sort(v.begin(),v.end());
        ll lo=1,hi= v[n-1]+w;
        ll ans=0;
        while(lo<=hi)
        {
            ll mid= (lo+hi)/2;
            if(check(mid))
            {
                lo=mid+1;
                ans=mid;
            }
            else hi=mid-1;
        }
        cout<<ans<<endl;
        v.clear();
    }
}

