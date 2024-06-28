#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pi acos(-1.0)
#define pb push_back
#define sqrt(x) sqrtl(x)
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define allout(x) for(auto &it: x) cout<<it<<" "; cout<<endl
#define out(y,a,n) for(ll i=a; i<=n; i++) cout<<y[i]<<" "; cout<<endl
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
        vector<ll>x(n),y(n),dif(n);
        for(ll i=0;i<n;i++) cin>>x[i];
        for(ll i=0;i<n;i++) cin>>y[i];
        for(ll i=0;i<n;i++) dif[i]=y[i]-x[i];
        boro(dif);
        ll l=0,r=n-1;
        ll ans=0;
        while(l<r)
        {
            if(dif[l]+dif[r]<0)
            {
                r--;
            }
            else
            {
                ans++;
                l++;
                r--;
            }
        }
        cout<<ans<<endl;
    }
}