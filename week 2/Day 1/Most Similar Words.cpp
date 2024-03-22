#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        //for(int i=0;i<n;i++) cout<<arr[i]<<endl;
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            string s1=arr[i];
            for(int k=i+1;k<n;k++)
            {
                string s2=arr[k];
                int sum=0;
                for(int j=0;j<m;j++)
                {
                    int a=s2[j]-s1[j];
                    sum+=abs(a);
                }
                if(sum<ans)
                {
                    ans=sum;
                }
            }
        }
        cout<<ans<<endl;
    }
}
