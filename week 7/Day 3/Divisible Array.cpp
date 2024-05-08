#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++) a[i]=i;
        ll sum=(n*(n+1))/2;
        if(sum%n) a[sum%n]+=sum%n;
        for(ll i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}