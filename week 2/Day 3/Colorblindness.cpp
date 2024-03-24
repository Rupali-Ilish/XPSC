#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,ok=1;
        cin>>n;
        string s1;
        string s2;
        cin>>s1>>s2;
        for(i=0; i<n; i++)
        {
            if((s1[i]=='R' && s2[i]!='R') || (s1[i]!='R' && s2[i]=='R'))
            {
                cout<<"NO"<<endl;
                ok=0;
                break;
            }
        }
        if(ok==1)
            cout<<"YES"<<endl;
    }
}