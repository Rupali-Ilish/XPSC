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
        vector<ll>v(n),ng;
        bool zero=false;
        ll sum=0;
        ll neg=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=abs(v[i]);
            if(v[i]==0) zero=true;
            else if(v[i]<0) 
            {
                neg++;
                ng.pb(v[i]);
            }
        }
        if(!zero)
        {
            if(neg%2)
            {
                sort(v.begin(),v.end());
                sort(ng.rbegin(),ng.rend());
                bool done=false;
                for(ll i=0;i<n-1;i++)
                {
                    if(v[i]<0 and v[i+1]>=0)
                    {
                        if(abs(v[i])>v[i+1])
                        {
                            sum= sum- 2*v[i+1];
                            done=true;
                        }
                        break;
                    }
                }
                if(!done)
                {
                    sum-= 2*abs(ng[0]);
                }
            }
        }
        cout<<sum<<endl;
    }
}