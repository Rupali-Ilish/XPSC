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
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll ans=INT_MAX;
        for(ll i=1;i<n-1;i++)
        {
            ll mx= max(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
            ans= min(ans,mx);
        }
        ans= min({abs(v[0]-v[1]),ans,abs(v[n-1]-v[n-2])});
        cout<<ans<<endl;
    }
}