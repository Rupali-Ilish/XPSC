#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
ll n;
set<ll>s;
void sset()
{
    for(ll i=1;i<10001;i++)
    {
        s.insert(i*i*i);
    }
}
int main()
{
    fast_io;
    sset();
    ll t; cin>>t;
    while(t--)
    {
        cin>>n;
        bool ok=true;
        for(ll i=1;(i*i*i)<=n;i++)
        {
            ll val= i*i*i;
            ll khuj= n-val;
            if(s.count(khuj))
            {
                YES;
                ok=false;
                break;
            }
        }
        if(ok) NO;
    }
}

