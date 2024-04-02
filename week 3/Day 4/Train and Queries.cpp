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
        cout<<endl;
        ll n,k;
        cin>>n>>k;
        map<ll,pll>m;
        for(ll i=0;i<n;i++)
        {
            ll val; cin>>val;
            //agei ase
            if(m.count(val))
            {
                m[val].second=i+1; //joto dure, max j index e ase oi val
            }
            else //nai
            {
                m[val].first=i+1;
                m[val].second=i+1;
            }
        }
        while(k--)
        {
            ll a,b;
            cin>>a>>b;
            if(m.count(a)==0 or m.count(b)==0 or m[a].first>m[b].second)
            {
                NO;
            }
            else
            {
                YES;
            }
        }
    }
}

