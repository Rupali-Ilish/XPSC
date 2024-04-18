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
vector<ll>palindrome;
void check()
{
    for(ll i=0;i<40000;i++)
    {
        string s= to_string(i);
        string rev=s;
        reverse(rev.begin(),rev.end());
        if(s==rev) palindrome.pb(i);
    }
    return;
}
int main()
{
    fast_io;
    check();
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v(n);
        unordered_map<ll,ll>m;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }

        ll cnt=n; //nijera nijera pair krbe ty
        for(ll i=0;i<n;i++)
        {
            ll val=v[i];
            for(ll i=0;i<palindrome.size();i++)
            {
                if(m.count(val^palindrome[i])) //j ele er sathe ^ korle palindrome hbe, oita thakle
                {
                    cnt+= m[val^palindrome[i]]; //map e j count, oita jog
                }
            }
        }
        cnt=cnt/2; //13 27 27, 13 er jonno, 13,27 13,27 abar 27 er jonno 27,13 2nd 27 er jonno 27,13- jegula agei hoisilo, ty 2 diye vag
        cout<<cnt<<endl;
    }
}
