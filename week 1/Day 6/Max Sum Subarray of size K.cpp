#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &v , int n)
    {
    int l=0,r=0;
    long long int ans= INT_MIN;
    int cnt=0;
    long long int sum= v[l];
    cnt++;
    while(l<n and r<n)
    {
        if(cnt==k)
        {
            ans=max(sum,ans);
            sum-=v[l];
            cnt--;
            r++;
            l++;
        }
        else
        {
            r++;
        }
        sum+=v[r];
        cnt++;
    }
    return ans;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 