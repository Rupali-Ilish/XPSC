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
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll l=0,r=0;
    ll sum=0;
    ll ans=0;
    ll cnt=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=s)
        {
            cnt= r-l+1;
            ans=max(ans,cnt);
        }
        else if(sum>s)
        {
            while(sum>s and l<r)
            {
                sum-=v[l];
                l++;
            }
            if(sum<=s)
            {
                cnt= r-l+1;
                ans=max(ans,cnt);
            }
        }
        r++;
    }
    cout<<ans<<endl;
}

