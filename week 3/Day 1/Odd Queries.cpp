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
        ll n,q; cin>>n>>q;
        vector<ll>v(n),pre(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        pre[0]=v[0];
        for(ll i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+v[i];
        }
        while(q--)
        {
            ll l,r,k;
            ll sub;
            cin>>l>>r>>k;
            if(l==1)
            {
                sub= pre[r-1];
            }
            else
            {
                sub=pre[r-1]-pre[l-2];
            }
            ll ind= r-l+1;
            ll add=ind*k;
            ll addkrbo= add-sub;
            ll finalsum= pre[n-1]+addkrbo;
            if(finalsum%2) YES;
            else NO;
        }
    }
}

