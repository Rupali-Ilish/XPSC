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
        ll n; cin>>n;
        vector<ll>v(n);
        ll x=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            x=x^v[i];
        }
        //odd hoile, a^b^c^x=0
        if(n%2) cout<<x<<endl;
        else //even hoile, a^b^c^d=0 noile -1
        {
            if(x==0) cout<<0<<endl;
            else cout<<-1<<endl;
        }
    }
}

