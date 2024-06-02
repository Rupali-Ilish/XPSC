#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
bool sq_ch(ll val)
{
    ll sq= (ll)sqrt(val);
    if(sq*sq==val) return true;
    return false;
}
bool prime_ch(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    fast_io;
    ll n; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    
    for(ll i=0;i<n;i++)
    {
        if(arr[i]==1) NO;
        else if(sq_ch(arr[i]))
        {
            ll sq= (ll)sqrt(arr[i]);
            ll div= arr[i]/sq;
            if(prime_ch(div)) YES;
            else NO;
        }
        else NO;
    }
}
