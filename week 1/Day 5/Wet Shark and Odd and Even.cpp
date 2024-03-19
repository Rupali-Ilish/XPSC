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
    ll n; cin>>n;
    vector<ll>v(n);
    ll sum=0;
    ll minodd=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        ll a=v[i];
        sum+=a;
        if(a%2 and a<minodd) minodd=a;
    }
    if(sum%2==0) cout<<sum<<endl;
    else
    {
        sum-=minodd;
        cout<<sum<<endl;
    }
}
