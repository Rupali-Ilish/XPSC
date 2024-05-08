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
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        ll len= s.size();
        string ans;
        vector<ll>smol;
        vector<ll>big;
        
        for(ll i=0;i<len;i++)
        {
            if(s[i]!='b' and (s[i]>='a' and s[i]<='z'))
            {
                smol.pb(i);
            }
            else if(s[i]!='B' and (s[i]>='A' and s[i]<='Z'))
            {
                big.pb(i);
            }
            else if(s[i]=='b')
            {
                if(smol.size()!=0)
                {
                    s[smol.back()]='0';
                    s[i]='0';
                    smol.pop_back();
                }
                s[i]='0';
            }
            else if(s[i]=='B')
            {
                if(big.size()!=0)
                {
                    s[big.back()]='0';
                    s[i]='0';
                    big.pop_back();
                }
                s[i]='0';
            }
        }
        
        //string ans;
        for(int i=0;i<len;i++)
        {
            if(s[i]!='0') ans+=s[i];
        }
        cout<<ans<<endl;
    }
}

