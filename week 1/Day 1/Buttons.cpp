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
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a>b)
    {
        ans=a;
        a--;
        ans+=max(a,b);
    }
    else
    {
        ans=b;
        b--;
        ans+=max(a,b);
    }
    cout<<ans<<endl;
}
