#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll, ll>
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define fix(n, val) fixed << setprecision(n) << val
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int bi_to_dec(string s)
{
    int len= s.size();
    int bin = 0;
    int rem, base = 1;

    for(int i=len-1;i>=0;i--)
    {
        bin+= (s[i]-'0')*base;
        base*=2;
    }

    return bin;
}
int32_t main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            string s; cin>>s;
            st.insert(bi_to_dec(s));
        }
        //for(auto it:st) cout<<it<<" ";
        bool ok = true;
        for (int i = 0; i < k; i++)
        {
            if (!st.count(1 << i))
            {
                NO;
                ok = false;
                break;
            }
        }
        if (ok)
            YES;
    }
}