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
    map<char,ll>m;
    ll val=1;
    for(char ch='a';ch<='z';ch++)
    {
        m[ch]=val;
        val++;
    }
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        vector<pll>v;
        ll start= m[s[0]];
        ll end= m[s[s.size()-1]];
        if(start>end)
        {
            for(ll i=0;i<s.size();i++)
            {
                if(m[s[i]]<=start and m[s[i]]>=end)
                {
                    v.pb({m[s[i]],i+1});
                }
            }
            sort(v.rbegin()+1,v.rend()-1);
            ll cost=0;
            for(ll i=0;i<v.size()-1;i++)
            {
                cost+= abs(v[i].first-v[i+1].first);
            }
            cout<<cost<<" "<<v.size()<<endl;
            for(auto it: v)
            {
                cout<<it.second<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(ll i=0;i<s.size();i++)
            {
                if(m[s[i]]>=start and m[s[i]]<=end)
                {
                    v.pb({m[s[i]],i+1});
                }
            }
            sort(v.begin()+1,v.end()-1);
            ll cost=0;
            for(ll i=0;i<v.size()-1;i++)
            {
                cost+= abs(v[i].first-v[i+1].first);
            }
            cout<<cost<<" "<<v.size()<<endl;
            for(auto it: v)
            {
                cout<<it.second<<" ";
            }
            cout<<endl;
        }
    }
}
