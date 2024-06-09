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
ll n; 
vector<ll>v;
bool check(ll mid)
{
    ll l=0,r=0;
    ll cnt=1;
    while(l<n and r<n)
    {
        if((v[r]-v[l])<= 2*mid)
        {
            r++;
        }
        else
        {
            cnt++;
            l=r;
        }
    }
    if(cnt>3) return false;
    else return true;
}
int32_t main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        cin>>n;
        
        for(ll i=0;i<n;i++) 
        {
            ll a; cin>>a;
            v.pb(a);
        }
        choto(v);

        ll lo=0,hi=v[n-1];
        ll ans;
        while(lo<=hi)
        {
            ll mid= (lo+hi)/2;
            if(check(mid))
            {
                ans=mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        cout<<ans<<endl;
        v.clear();
    }
}