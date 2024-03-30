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
        transform(s.begin(),s.end(),s.begin(),::tolower);
        //cout<<s<<endl;
        bool ok=true;
        if(s[0]!='m') NO;
        else
        {
            //cout<<"else e dhukse"<<endl;
            for(ll i=0;i<n;i++)
            {
                if(s[i]=='m' and (s[i+1]!='m' and s[i+1]!='e'))
                {
                    NO;
                    ok=false;
                    break;
                }
                else if(s[i]=='e' and (s[i+1]!='e' and s[i+1]!='o'))
                {
                    NO;
                    ok=false;
                    break;
                }
                else if(s[i]=='o' and (s[i+1]!='o' and s[i+1]!='w'))
                {
                    NO;
                    ok=false;
                    break;
                }
                else if(s[i]=='w' and (s[i+1]!='w' and s[i+1]!='\0'))
                {
                    NO;
                    ok=false;
                    break;
                }
            }
            if(ok) YES;
            //else NO;
        }
    }
}

