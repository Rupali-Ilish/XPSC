#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define fix(n,val) fixed<<setprecision(n)<<val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int32_t main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];

        ll ans= (n*(n+1))/2; //initially shb subarray

        //odd gula hbe na ty count
        vector<ll>odd;
        for(ll i=0;i<n;i++)
        {
            ll cnt=0;
            if(v[i]%2)
            {
                while(1)
                {
                    if(v[i]%2==0 or i>=n)
                    {
                        break;
                    }
                    else
                    {
                        cnt++; //odd num er len
                        i++;
                    }
                }
                odd.pb(cnt); //odd subarray size
            }
        }
        ll sz= odd.size();
        if(sz)
        {
            boro(odd);
            for(auto it: odd)
            {
                ans-= (it*(it+1))/2;
            }
            ll lombaodd= odd[0];
            ll invalid= (lombaodd*(lombaodd+1))/2;
            ll mid= lombaodd/2;
            if(lombaodd%2) //boro subarray ta odd len
            {
                ll bad= (mid*(mid+1));
                ll valid= invalid-bad;
                ans+=valid; //ans+= mid+1 * mid+1
            }
            else //boro subarray even len
            {
                ans+= (mid*(mid+1));
            }
        }
        cout<<ans<<endl;
    }
}