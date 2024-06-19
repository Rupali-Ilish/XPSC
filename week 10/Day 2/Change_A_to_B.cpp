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
        ll a,b,k; cin>>a>>b>>k;
        ll ans=0;
        while(1)
        {
            if(b==a) break;
            if(b%k==0)
            {
                if((b/k)>=a)
                {
                    b=b/k;
                    ans++;
                }
                else if(b/k<a)
                {
                    ans+= (b-a);
                    b-= (b-a);
                }
            }
            else 
            {
                ans+= b%k;
                b-= b%k;
            }
        }
        cout<<ans<<endl;
    }
}