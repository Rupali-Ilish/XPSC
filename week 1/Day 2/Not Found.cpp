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
    string s; cin>>s;
    ll arr[26]={0};
    ll len=s.size();
    for(ll i=0;i<len;i++)
    {
        arr[s[i]-'a']++;
    }
    char ch;
    bool ok=false;
    for(ll i=0;i<26;i++)
    {
        if(arr[i]==0)
        {
            ch=i+'a';
            ok=true;
            break;
        }
    }
    if(ok) cout<<ch<<endl;
    else cout<<"None"<<endl;
}
