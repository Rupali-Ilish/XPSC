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
char c1,c2;
bool spal(string s)
{
    ll l=0, r=s.size()-1;
    while(l<=r)
    {
        if(s[l]==s[r])
        {
            l++;
            r--;
        }
        else
        {
            c1=s[l];
            c2=s[r];
            return false;
        }
    }
    return true;
}
bool pal(string s)
{
    ll l=0, r=s.size()-1;
    while(l<=r)
    {
        if(s[l]==s[r])
        {
            l++;
            r--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string s; cin>>s;
        bool fcheck= spal(s);
        if(fcheck) cout<<0<<endl;
        else
        {
            string sc1,sc2;
            ll cnt1=0,cnt2=0;
            for(ll i=0;i<n;i++)
            {
                if(s[i]!=c1)
                {
                    sc1.pb(s[i]);
                }
            }
            bool c11= pal(sc1);
            if(c11)
            {
                cnt1=0;
                ll l=0,r=n-1;
                while(l<=r)
                {
                    if(s[l]==s[r])
                    {
                        l++;
                        r--;
                    }
                    else
                    {
                        if(s[l]==c1) l++;
                        else r--;
                        cnt1++;
                    }
                }
            }
            for(ll i=0;i<n;i++)
            {
                if(s[i]!=c2)
                {
                    sc2.pb(s[i]);
                }
            }
            bool c22= pal(sc2);
            if(c22)
            {
                cnt2=0;
                ll l=0,r=n-1;
                while(l<=r)
                {
                    if(s[l]==s[r])
                    {
                        l++;
                        r--;
                    }
                    else
                    {
                        if(s[l]==c2) l++;
                        else r--;
                        cnt2++;
                    }
                }
            }
            if(!c11 and !c22) cout<<-1<<endl;
            else if(c11 and c22) cout<<min(cnt1,cnt2)<<endl;
            else cout<<max(cnt1,cnt2)<<endl;
        }
    }
}