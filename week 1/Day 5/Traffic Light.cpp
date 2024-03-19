#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

int main()
{
    fast_io;
    ll t; cin>>t;
    while(t--)
    {
        ll n; char ch; string s;
        cin>>n>>ch>>s;
        if(n==1) cout<<0<<endl;
        else if(ch=='g') cout<<0<<endl;
        else
        {
            s+=s;
            ll i,j;
            ll cnt=0, maxcnt=0;
            for(i=0;i<n; i++)
            {
                if(s[i]==ch)
                {
                    //cout<<"i "<<i<<endl;
                    cnt=0;
                    for(j=i+1;j<2*n; j++)
                    {
                        if(s[j]!='g')
                        {
                            cnt++;
                        }
                        else
                        {
                            cnt++;
                            //cout<<"cnt "<<cnt<<endl;
                            if(cnt>maxcnt)
                            {
                                maxcnt=cnt;
                                //cout<<"maxcnt "<<maxcnt<<endl;
                                cnt=0;
                            }
                            break;
                        }
                    }
                    i=j;
                }
            }
            cout<<maxcnt<<endl;
        }
    }
}
