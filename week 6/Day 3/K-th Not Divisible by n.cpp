#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll,ll>
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k; //7 97
        ll ans=k; //97
        ll olddiv= k/n; //13
        ll newdiv;
        ll newk= k; //97
        newk= newk+olddiv; //110
        while(1)
        {
            newdiv= newk/n; //15, 16, 16
            if(newdiv==olddiv)
            {
                break;
            }
            else
            {
                newk= newk+ (newdiv-olddiv); //110+15-13=112, 113
                olddiv= newdiv;//15, 16
            }
        }
        cout<<newk<<endl;
    }
}