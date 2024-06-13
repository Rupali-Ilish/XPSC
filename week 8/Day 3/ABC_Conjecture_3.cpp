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

int32_t main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string s; cin>>s;
        ll cura=0,tota=0,cnt=0;
        bool b=false;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='a') cura++;
            else if(s[i]=='b')
            {
                tota+=cura;
                b=true;
                cura=0;
            }
            else
            {
                if(b)
                {
                    if(tota)
                    {
                        cnt++;
                        tota--;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
}