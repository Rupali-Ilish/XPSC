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
        ll a[n][n-1];
        map<ll,ll>m,mp;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n-1;j++)
            {
                cin>>a[i][j];
                m[a[i][j]]+=(j+1); //total position store
            }
        }
        for(auto it: m)
        {
            mp[it.second]=it.first; //position ke key banaitesi
            //index ke value, for easy sorting
        }
        for(auto it: mp)
        {
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}

