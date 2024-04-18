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
int check_jth_bit(ll val, ll j)
{
    return val & (1<<j);
}
int main()
{
    fast_io;
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(m+1);
    for(ll i=0;i<=m;i++) cin>>v[i];
    
    ll cnt=0;
    for(ll i=0;i<m;i++)
    {
        ll odd=0;
        for(ll j=0;j<n;j++)
        {
            if(check_jth_bit(v[i],j) != check_jth_bit(v[m],j))
            {
                odd++;
            }
        }
        if(odd<=k) cnt++;
        odd=0;
    }
    cout<<cnt<<endl;
}
