#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<string,int>mp;
        string arr[3][n]; 
        for(int i=0;i<3;i++) //ppl
        {
            for(int j=0;j<n;j++) //words
            {
                cin>>arr[i][j];
                mp[arr[i][j]]++;
            }
        }
        vector<int>v(3,0);
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mp[arr[i][j]]==1) v[i]+=3;
                else if(mp[arr[i][j]]==2) v[i]+=1;
            }
        }
        for(auto it: v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
