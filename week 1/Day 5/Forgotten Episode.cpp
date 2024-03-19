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
    set<ll>s;
    for(ll i=0;i<n-1;i++)
    {
        ll a; cin>>a;
        s.insert(a);
    }
    for(ll i=1;i<=n;i++)
    {
        if(!s.count(i))
        {
            cout<<i<<endl;
            return 0;
        }
    }
}
