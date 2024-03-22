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
        for(int i=0;i<n;i++)
        {
            int q; cin>>q;
            while(q--)
            {
                char a; cin>>a;
                if(a=='D')
                {
                    if(arr[i]==9) arr[i]=0;
                    else arr[i]++;
                }
                else
                {
                    if(arr[i]==0) arr[i]=9;
                    else arr[i]--;
                }
            }
        }
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}
