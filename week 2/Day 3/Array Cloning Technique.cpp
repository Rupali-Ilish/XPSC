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
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(n==1) cout<<0<<endl;
        else
        {
            ll mx=0;
            ll val=0;
            for(auto it: mp)
            {
                if(it.second>mx)
                {
                    mx=it.second; //2
                    val=it.first;
                }
            }
            if(mx==n) cout<<0<<endl;
            else
            {
                ll rem= n-mx; //18
                ll cng=rem; //18
                ll cnt=0;
                while(cng>0)
                {
                    cnt++;
                    cng=cng-mx;
                    mx*=2;
                }
                rem+=cnt;
                cout<<rem<<endl;
            }
        }
    }
}

