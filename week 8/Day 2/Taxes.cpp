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
bool prime_check(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int32_t main()
{
    fast_io;
    ll n; cin>>n;
    if(n==2 or prime_check(n)) cout<<1<<endl;
    else if(n%2==0) cout<<2<<endl; //any even number = sum of 2 primes
    else
    {
        if(prime_check(n-2)) cout<<2<<endl; //any odd= if(n-2) prime, then sum of 2 prime
        else cout<<3<<endl; //else, sum of 3 primes
    }
}