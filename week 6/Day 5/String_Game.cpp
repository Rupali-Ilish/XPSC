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
string s1, s2;
ll len,len2;
vector<ll>a(200005);
bool check(ll mid)
{
    vector<bool>katsi(len+5,false); //mid kombe barbe ty global niye hoy na
    for(ll i=0;i<=mid;i++)
    {
        katsi[a[i]]=true;
    }
    ll j=0;
    for(ll i=0;i<len;i++)
    {
        if(s1[i]==s2[j] and !katsi[i+1])
        {
            j++;
        }
        if(j==len2) return true;
    }
    return false;
}
int32_t main()
{
    fast_io;
    cin>>s1>>s2;
    len= s1.size();
    len2=s2.size();
    for(ll i=0;i<len;i++) cin>>a[i];
    ll l=0,r=len-1;
    ll ans=0;
    while(l<=r)
    {
        ll mid= (l+r)/2;
        if(check(mid))
        {
            ans=mid+1;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
}