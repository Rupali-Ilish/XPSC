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
        map<ll,ll>mp; //cnt krbo
        vector<pll> vp; //vector pair e store krbo
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto it: mp) //mp to vec e convert
        {
            vp.pb({it.first,it.second});
        }
        sort(vp.rbegin(),vp.rend()); //boro theke choto
//        for(auto it: vp)
//        {
//            cout<<it.first<<" "<<it.second<<endl;
//        }
        ll ans=vp[0].second;
        ll sz= vp.size();
        ll bound=ans;
        for(ll i=1;i<sz;i++)
        {
            //agertar cheye 1 kom naki
            if(vp[i-1].first-vp[i].first==1)
            {
                if(vp[i].second<=bound)
                {
                    bound= vp[i].second;
                }
                else //cnt beshi thakle
                {
                    ll sub= vp[i].second-vp[i-1].second;
                    ans+=sub;
                    bound= vp[i].second;
                }
            }
            else //1 er kom beshi
            {
                ans+= vp[i].second;
                bound= vp[i].second;
            }
        }
        cout<<ans<<endl;
    }
}

