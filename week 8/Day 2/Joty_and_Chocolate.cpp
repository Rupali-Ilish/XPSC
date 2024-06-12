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
ll lcm(ll a, ll b)
{
    return (a/ __gcd(a,b))*b;
}
int32_t main()
{
    fast_io;
    
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    ll acnt=0,bcnt=0,both=0;
    
    both= n/lcm(a,b);
    acnt= n/a - both;
    bcnt= n/b - both;

    ll ans= acnt*p + bcnt*q + both*max(p,q);
    cout<<ans<<endl;
}