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
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll div= s/n;
        ll rem= s%n;
        if(rem>b) NO;
        else
        {
            if(div>a)
            {
                ll need= (div-a)*n+rem;
                if(need>b) NO;
                else YES;
            }
            else YES;
        }
    }
}