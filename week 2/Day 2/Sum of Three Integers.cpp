#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s,i,j,l,count=0,sum=0;
    cin>>k>>s;
    for(i=0; i<=k; i++)
    {
        for(j=0; j<=k; j++)
        {
            sum= s-i-j;
                if(sum>=0 && sum<=k)
                    count++;
        }
    }
    cout<<count;
}