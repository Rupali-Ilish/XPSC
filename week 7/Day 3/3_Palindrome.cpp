#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    ll n; cin>>n;
    string s1="abb", s2="aab", s3="baa", s4="bba";
    if(n==1) cout<<"a"<<endl;
    else if(n==2) cout<<"ab"<<endl;
    else if(n==3) cout<<"abb"<<endl;
    else
    {
        ll turn= n/3;
        if(n%3) turn++;
        string ans;
        ll t=1;
        while(turn--)
        {
            if(t==1)
            {
                ans+=s1;
                t=2;
            }
            else if(t==2)
            {
                ans+=s2;
                t=3;
            }
            else if(t==3)
            {
                ans+=s3;
                t=4;
            }
            else if(t==4)
            {
                ans+=s4;
                t=1;
            }
        }
        ll sz= ans.size();
        if(sz==n) cout<<ans<<endl;
        else 
        {
            ll del=sz-n;
            while(del--) ans.pop_back();
            cout<<ans<<endl;
        }
    }
}