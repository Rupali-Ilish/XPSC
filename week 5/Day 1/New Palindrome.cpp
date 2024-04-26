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
        string s; cin>>s;
        ll len= s.size();
        map<char,ll>m;
        for(ll i=0;i<len;i++)
        {
            m[s[i]]++;
        }
        ll sz=m.size();
        if(sz==1) NO;
        else if(sz==2)
        {
            bool ok=true;
            for(auto it: m)
            {
                if(it.second==1)
                {
                    NO;
                    ok=false;
                    break;
                }
            }
            if(ok) YES;
        }
        else YES;
    }
}