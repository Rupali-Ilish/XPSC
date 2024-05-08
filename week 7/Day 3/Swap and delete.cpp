#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        ll len=s.size();
        ll zero=0,one=0;
        for(ll i=0;i<len;i++)
        {
            if(s[i]=='0') zero++;
            else one++;
        }
        if(zero==one) cout<<0<<endl;
        else //010111
        {
            ll total= zero+one; //2+4
            ll cnt=0;
            for(ll i=0;i<len;i++)
            {
                if(s[i]=='0')
                {
                    if(one==0) break;
                    one--; //3,2
                    cnt++; //1,3
                }
                else if(s[i]=='1')
                {
                    if(zero==0) break;
                    zero--; //1,0
                    cnt++; //2,4
                }
            }
            ll ans= total-cnt; //6-4
            cout<<ans<<endl;
        }
    }
}

