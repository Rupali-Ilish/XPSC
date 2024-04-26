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
        ll n,c; cin>>n>>c;
        vector<ll>coin(n);
        for(ll i=0;i<n;i++)
        {
            ll a; cin>>a;
            coin[i]=a+i+1;
        }
        sort(coin.begin(),coin.end());
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            c-=coin[i];
            if(c>=0) cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }
}