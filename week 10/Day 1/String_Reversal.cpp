#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pi acos(-1.0)
#define pb push_back
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define rev(r) reverse((r).begin(),(r).end())
#define fix(n,val) fixed<<setprecision(n)<<val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main()
{
    fast_io;
    ll n; cin>>n;
    string s;
    cin>>s;
    map<char,vector<ll>>m;
    for(ll i=0;i<n;i++)
    {
        m[s[i]].pb(i);
    }
    vector<ll>v;
    for(ll i=0;i<n;i++) 
    {
        v.pb(m[s[i]].back());
        m[s[i]].pop_back();
    }
    pbds<ll>p;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+= p.order_of_key(v[i]);
        p.insert(v[i]);
    }
    cout<<sum<<endl;
}