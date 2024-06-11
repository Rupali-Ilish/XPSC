#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define fix(n,val) fixed<<setprecision(n)<<val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int32_t main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        ll n,m; cin>>n>>m;
        vector<ll>a(n),b(m);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<m;i++) cin>>b[i];

        if(n<4 or m<4 or (n+m)<11) cout<<-1<<endl;
        else
        {
            boro(a);
            boro(b);
            ll sum=0;
            for(ll i=0;i<4;i++)
            {
                sum+=a[i];
                sum+=b[i];
            }
            ll l=4,r=4;
            ll cnt=8;
            while(l<n and r<m and cnt!=11)
            {
                if(a[l]>b[r])
                {
                    sum+=a[l];
                    l++;
                    cnt++;
                }
                else
                {
                    sum+=b[r];
                    r++;
                    cnt++;
                }
            }
            if(l!=n)
            {
                while(cnt!=11)
                {
                    sum+=a[l];
                    l++;
                    cnt++;
                }
            }
            else
            {
                while(cnt!=11)
                {
                    sum+=b[r];
                    r++;
                    cnt++;
                }
            }
            cout<<sum<<endl;
        }
    }
}