#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int cnt=0;
    int sumc=0,mulc=0;
    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s;j++)
        {
            for(int k=0;k<=s;k++)
            {
                sumc=i+j+k;
                mulc=i*j*k;
                if(sumc>=0 and sumc<=s and mulc>=0 and mulc<=t)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}