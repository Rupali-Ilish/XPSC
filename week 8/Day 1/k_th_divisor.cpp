#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll, ll>
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define fix(n, val) fixed << setprecision(n) << val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
ll n,k;
vector<ll>v;
ll divisor(ll n)
{
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i*i!=n) v.push_back(n/i);
        }
    }
    choto(v);
    return v.size();
}
int32_t main()
{
    fast_io;
    cin>>n>>k;
    ll sz= divisor(n);
    if(sz<k) cout<<-1<<endl;
    else cout<<v[k-1]<<endl;
    v.clear();
}