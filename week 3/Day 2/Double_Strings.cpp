#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll, ll>
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

int main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> vs(n);
        set<string> st;
        for (ll i = 0; i < n; i++)
        {
            cin >> vs[i];
            st.insert(vs[i]);
        }
        string ans;
        for (ll i = 0; i < n; i++)
        {
            string cur = vs[i];
            ll len = cur.size();
            if (len == 1)
            {
                ans.pb('0');
            }
            else
            {
                string s1;
                bool s1paisi = false, s2paisi = false;
                for (ll i = 0; i < len - 1; i++)
                {
                    s1.pb(cur[i]);
                    if (st.count(s1))
                    {
                        s1paisi = true;
                        string s2;
                        for (ll j = i + 1; j < len; j++)
                        {
                            s2.pb(cur[j]);
                        }
                        if (st.count(s2))
                        {
                            s2paisi = true;
                            ans.pb('1');
                        }
                    }
                    if (s1paisi and s2paisi)
                    {
                        break;
                    }
                    else
                    {
                        s1paisi = false;
                        s2paisi = false;
                    }
                }
                if (s1paisi == false or s2paisi == false)
                {
                    ans.pb('0');
                }
            }
        }
        cout << ans << endl;
    }
}
