#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int arr[26]={0};
        for(int i=0;i<n;i++)
        {
            int a=s[i]-'a';
            arr[a]++;
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            //cout<<i+'a'<<" "<<arr[i]<<endl;
            if(arr[i]!=0 && arr[i]%2!=0)
            {
                cnt++;
            }
        }
        if(cnt==0)
        cout<<"YES"<<endl;
        else
        {
            if(cnt-k<=1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
