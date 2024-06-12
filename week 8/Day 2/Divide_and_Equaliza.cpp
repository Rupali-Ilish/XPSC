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

#define sz 100000
vector<bool> vforprime(sz,true);
vector<int> primes;
void sieve()
{
    vforprime[1]=0;
    for(ll i=2; i*i<=sz; i++)
    {
        if(vforprime[i])
        {
            for(ll j=i+i; j<=sz; j=j+i)
            {
                vforprime[j]=false;
            }
        }
    }
    for(int i=2; i<sz; i++)
    {
        if(vforprime[i]) primes.pb(i);
    }
}

int32_t main()
{
    fast_io;
    sieve();
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        map<int,int>mp;

        for(ll j=0;j<n;j++)
        {
            for(int i=0; primes[i]*primes[i]<=v[j]; i++)
            {
                while(v[j]%primes[i]==0)
                {
                    v[j]/=primes[i];
                    mp[primes[i]]++;
                }
            }
            if(v[j]!=1) mp[v[j]]++;
        }
        bool ok=true;
        for(auto m: mp)
        {
            //cout<<m.first<<" => "<<m.second<<endl;
            if(m.ss%n!=0) 
            {
                NO;
                ok=false;
                break;
            }
        }
        if(ok) YES;
    }
}