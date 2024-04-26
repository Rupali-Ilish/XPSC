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
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll fst= abs(a-1);
        ll sec= abs(b-c)+abs(c-1);
        if(fst<sec) cout<<1<<endl;
        else if(fst>sec) cout<<2<<endl;
        else cout<<3<<endl;
    }
}