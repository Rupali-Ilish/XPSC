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
    map<ll,char>m;
    char ch='a';
    for(ll i=1;i<=26;i++)
    {
        m[i]=ch;
        ch++;
    }
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string s,ans; cin>>s;
        reverse(s.begin(),s.end());
        ll l=0;
        while(l<=n-1)
        {
            if(s[l]=='0')
            {
                ll f= s[l+2]-'0';
                ll sec= s[l+1]-'0';
                ll val= f*10 + sec;
                ans.pb(m[val]);
                l=l+3;
            }
            else
            {
                ans.pb(m[s[l]-'0']);
                l++;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}
