#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int cnt=0;
        for(int i=0;i<=n-k;i++)
        {
            for(int j=i;j<i+k;j++)
            {
                if(arr[j]%2!=0)
                {
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}