#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll, ll>
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define ss second
#define ff first
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

const int N = 1e9;

int main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll b = n * (n - 1) / 2;

        map<ll, ll> m;
        for (ll i = 0; i < b; i++)
        {
            ll a;
            cin >> a;
            m[a]++;
        }

        vector<ll> ans(n, N);

        while (m.size() != 0)
        {
            for (auto it : m)
            {
                for (ll i = 0; i < n; i++)
                {
                    if (ans[i] == N)
                    {
                        if (it.ss >= (n - i - 1))
                        {
                            it.ss -= n - i - 1;
                            ans[i] = it.ff;
                        }
                        if (it.ss == 0)
                        {
                            m.erase(it.ff);
                            break;
                        }
                    }
                }
            }
        }

        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}