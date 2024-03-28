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
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll l=0,r=n-1;
        bool ok=true;
        ll val1=0, val2=0;
        while(l<=r)
        {
            if(v[l]!=v[r])
            {
                ok=false;
                val1=v[l];
                val2=v[r];
                break;
            }
            else
            {
                l++;
                r--;
            }
        }
        if(ok)
        {
            YES;
            continue;
        }
        
        //val1 er jonno
        l=0;
        r=n-1;
        bool ok1=true;
        while(l<=r) //val1 bade check
        {
            if(v[l]==val1)
            {
                l++;
                continue;
            }
            if(v[r]==val1)
            {
                r--;
                continue;;
            }
            if(v[l]!=v[r])
            {
                ok1=false;
                break;
            }
            else
            {
                l++;
                r--;
            }
        }
        
        //val2 er jonno
        l=0;
        r=n-1;
        bool ok2=true;
        while(l<=r) //val2 bade check
        {
            if(v[l]==val2)
            {
                l++;
                continue;
            }
            if(v[r]==val2)
            {
                r--;
                continue;;
            }
            if(v[l]!=v[r])
            {
                ok2=false;
                break;
            }
            else
            {
                l++;
                r--;
            }
        }
        
        if(ok1 or ok2) YES;
        else NO;
    }
}
