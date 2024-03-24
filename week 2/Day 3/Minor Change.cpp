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
    string s,t;
    cin>>s>>t;
    ll len=s.size();
    ll cnt=0;
    for(ll i=0;i<len;i++)
    {
        if(s[i]!=t[i]) cnt++;
    }
    cout<<cnt<<endl;
}

