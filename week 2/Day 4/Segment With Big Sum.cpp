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
    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll sum=0;
    ll l=0,r=0;
    ll ans=INT_MAX;
    while(r<n)
    {
        sum+=v[r];
        if(sum>=s)
        {
            while(sum>=s and l<r)
            {
                ll cnt= r-l+1;
                ans=min(ans,cnt);
                sum-=v[l];
                l++;
            }
            if(sum>=s)
            {
                ans=min(ans,r-l+1);
            }
        }
        r++;
        //cout<<"sum "<<sum<<endl;
    }
    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
}

