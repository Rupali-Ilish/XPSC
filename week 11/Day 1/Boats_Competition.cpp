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
        map<ll,ll> m;
        for(ll i=0;i<n;i++) 
        {
            ll x; cin>>x;
            m[x]++;
        }
        //s min hbe 2, max 2*n
        ll ans=0;
        for(ll s=2; s<=(2*n); s++)
        {
            ll cnt=0;
            //cout<<"s "<<s<<endl;
            for(ll i=1;i<=n; i++)
            {
                if(m.count(i) and m.count(s-i))
                {
                    //cout<<i<<" "<<s-i<<endl;
                    ll mn= min(m[i],m[s-i]);
                    cnt+=mn;
                }
            }
            ans=max(ans,cnt/2); //double cnt hoy, ty half
        }
        cout<<ans<<endl;
    }
}