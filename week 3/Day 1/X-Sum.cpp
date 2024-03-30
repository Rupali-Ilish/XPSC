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
ll row,col;
bool valid(ll i,ll j)
{
    if(i>=0 and i<row and j>=0 and j<col) return true;
    else return false;
}
int main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        cin>>row>>col;
        ll a[row][col];
        for(ll i=0;i<row;i++)
        {
            for(ll j=0;j<col;j++)
            {
                cin>>a[i][j];
            }
        }
        ll sum=0;
        ll ans=0;
        for(ll i=0;i<row;i++)
        {
            for(ll j=0;j<col;j++)
            {
                sum=0;
                sum+=a[i][j]; //oi index
                
                ll left=i-1, right=j-1;
                //upre left kona
                while(valid(left, right))
                {
                    sum+=a[left][right];
                    left--;
                    right--;
                }
                
                left=i-1; right=j+1;
                //upre right kona
                while(valid(left, right))
                {
                    sum+=a[left][right];
                    left--;
                    right++;
                }
                
                left=i+1; right=j-1;
                //niche left kona
                while(valid(left, right))
                {
                    sum+=a[left][right];
                    left++;
                    right--;
                }
                
                left=i+1; right=j+1;
                //niche right kona
                while(valid(left, right))
                {
                    sum+=a[left][right];
                    left++;
                    right++;
                }
                ans=max(ans,sum);
            }
        }
        cout<<ans<<endl;
    }
}

