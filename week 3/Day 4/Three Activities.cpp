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
        vector<pll>ski,movie,board;
        ll val;
        for(ll i=0;i<n;i++)
        {
            cin>>val;
            ski.pb({val,i+1});
        }
        sort(ski.rbegin(),ski.rend());
        for(ll i=0;i<n;i++)
        {
            cin>>val;
            movie.pb({val,i+1});
        }
        sort(movie.rbegin(),movie.rend());
        for(ll i=0;i<n;i++)
        {
            cin>>val;
            board.pb({val,i+1});
        }
        sort(board.rbegin(),board.rend());
        ll ans=0;
        //3 day, 3 ta index
        for(ll i=0;i<3;i++)
        {
            for(ll j=0;j<3;j++)
            {
                for(ll k=0;k<3;k++)
                {
                    if(ski[i].second!=movie[j].second and ski[i].second!=board[k].second and movie[j].second!=board[k].second)
                    {
                        ll valu= ski[i].first+movie[j].first+board[k].first;
                        ans=max(ans,valu);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
