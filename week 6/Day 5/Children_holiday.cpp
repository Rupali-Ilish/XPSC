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
ll m,n;
vector<tuple<ll,ll,ll> > v;
vector<ll> ans(15005);
bool ch(ll mid)
{
    ll tmp= m;
    for(ll i=0;i<n;i++)
    {
        tuple<ll,ll,ll> manush = v[i];
        ll t,z,y;
        t= get<0> (manush);
        z= get<1> (manush);
        y= get<2> (manush);

        //cout<<"tzy "<<t<<" "<<z<<" "<<y<<endl;

        ll fullseg, fullpabe, rem;
        fullseg = (t*z) + y;
        fullpabe= mid/fullseg;
        rem= mid%fullseg;

        // cout<<"fullseg "<<fullseg<<endl;
        // cout<<"fullpabe "<<fullpabe<<endl;

        ll total;
        total= (fullpabe*z) + min(z,(rem/t)); // 1 1 2 er belay kokhno mile na

        //cout<<"total "<<total<<endl;

        ans[i]= min(tmp,total); //tmp er cheye total beshi hole ans vul ashbe

        tmp= tmp- total;
        if(tmp<=0) tmp=0;

    }
    // cout<<"mid "<<mid<<endl;
    // for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
    // cout<<endl;

    if(tmp<=0) return true;
    else return false;
}
int32_t main()
{
    fast_io;
    cin>>m>>n;
    for(ll i=0;i<n;i++)
    {
        ll t,z,y;
        cin>>t>>z>>y;
        v.pb({t,z,y});
    }

    ll time;
    vector<ll>finalans(n);

    ll lo=0, hi=1e8;
    while(lo<=hi)
    {
        ll mid= (lo+hi)/2;
        if(ch(mid))
        {
            time= mid;
            for(ll i=0;i<n;i++)
            {
                finalans[i]= ans[i];
            }
            hi=mid-1;
        }
        else 
        {
            lo=mid+1;
        }
    }

    cout<<time<<endl;
    for(auto it: finalans) cout<<it<<" ";
}