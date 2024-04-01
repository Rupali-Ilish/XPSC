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
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string s; cin>>s;
        ll sum=0;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                sum+=i;
            }
            else if(s[i]=='R')
            {
                sum+=n-1-i;
            }
        }
        //cout<<"sum shurute "<<sum<<endl; //75 hoise
        
        ll l=0,r=n-1;
        ll k=0;
        while(l<=r)
        {
            if(s[l]=='L')
            {
                sum+=n-1-l-l;
                l++;
                v.pb(sum);
                k++;
            }
            else if(s[l]=='R')
            {
                l++;
            }
            if(s[r]=='R')
            {
                sum+=r-(n-1-r);
                r--;
                v.pb(sum);
                k++;
            }
            else if(s[r]=='L')
            {
                r--;
            }
        }
        for(ll i=k+1; i<=n; i++)
        {
            v.pb(sum);
        }
        for(auto it: v) cout<<it<<" ";
        cout<<endl;
    }
}

