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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        ll ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v[i] < 0)
            {
                ans += v[i];
            }
            else
            {
                if (v[i]+ans>=0)
                {
                    ans = 0;
                }
                else
                {
                    ans += v[i];
                }
            }
        }
        cout << abs(ans) << endl;
    }
}