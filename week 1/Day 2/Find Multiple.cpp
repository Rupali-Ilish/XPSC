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
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=-1;
    for(ll i=min(a,b); i<=max(a,b); i++)
    {
        if(i%c==0) 
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
