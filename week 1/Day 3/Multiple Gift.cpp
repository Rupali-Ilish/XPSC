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
    ll a,b;
    cin>>a>>b;
    ll cnt=1;
    ll ans=a;
    while(ans<=b)
    {
        if(2*ans<=b)
        {
            cnt++;
            ans=2*ans;
        }
        else break;
    }
    cout<<cnt<<endl;
}
