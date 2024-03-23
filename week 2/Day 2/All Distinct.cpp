#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int cnt=0;
        int sumcnt=0;
        for(int i=0;i<n-1; )
        {
            cnt=0;
            for(int j=i;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            i=i+cnt;
            sumcnt+=cnt-1;
        }
        if(sumcnt%2==0)
        {
            cout<<n-sumcnt<<endl;
        }
        else
        {
            cout<<n-(sumcnt+1)<<endl;
        }
    }
}
