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
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        bool age=false, pore=false;
        int a,b,c;
        int val=2000;
        for(ll i=0;i<n-1;i++)
        {
            if(v[i]<v[i+1] and !pore) 
            {
                age=true;
                if(v[i]<val)
                {
                    a=i+1;
                    val=v[i];
                }
            }
            if(age)
            {
                if(v[i]>v[i+1]) 
                {
                    pore=true;
                    b=i+1;
                    c=i+2;
                    break;
                }
            }
        }
        if(age and pore) 
        {
            YES;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else NO;
    }
}