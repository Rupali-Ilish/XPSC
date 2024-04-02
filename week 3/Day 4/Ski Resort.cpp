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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll cnt=0;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]<=q)
            {
                cnt++;
            }
            else
            {
                if(cnt>=k)
                {
                    ll num=cnt-k+1;
                    //cout<<"num "<<num<<endl;
                    ans+=(num*(num+1))/2;
                }
                cnt=0;
            }
            //cout<<"cnt "<<cnt<<endl;
        }
        if(cnt>=k)
        {
            ll num=cnt-k+1;
            //cout<<"num "<<num<<endl;
            ans+=(num*(num+1))/2;
        }
        cout<<ans<<endl;
    }
}

