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
        string s1,s2;
        cin>>s1>>s2;
        ll len1=s1.size();
        ll len2=s2.size();
        if(s1==s2) cout<<"="<<endl;
        else if(len1>len2)
        {
            if(s1[len1-1]=='S')
            {
                cout<<"<"<<endl;
            }
            else if(s1[len1-1]=='L')
            {
                cout<<">"<<endl;
            }
        }
        else if(len1==len2)
        {
            if(s1<s2) cout<<">"<<endl;
            else if(s1>s2) cout<<"<"<<endl;
            else cout<<"="<<endl;
        }
        else
        {
            if(s2[len2-1]=='S')
            {
                cout<<">"<<endl;
            }
            else if(s2[len2-1]=='L')
            {
                cout<<"<"<<endl;
            }
        }
    }
}

