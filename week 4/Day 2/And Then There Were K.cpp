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
        // n(binary), x= n er last setbit 0 baki right er shb 1;
        ll x;
        ll lastsetbit=0;
        for(ll i=0;i<32;i++)
        {
            if(n & (1<<i))
            {
                lastsetbit=i;
            }
        }
        x= (1<<lastsetbit)-1;
        cout<<x<<endl;
    }
}

