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
        ll n, q, a;
        cin >> n >> q;
        vector<ll> v(n), pre(n), vmax(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        pre[0] = v[0];
        for (ll i = 1; i < n; i++)
            pre[i] = pre[i - 1] + v[i];
        vmax[0] = v[0];
        for (ll i = 1; i < n; i++)
        {
            vmax[i] = max(vmax[i - 1], v[i]);
        }
        while (q--)
        {
            cin >> a;
            ll ans = 0;
            ll indx = upper_bound(vmax.begin(), vmax.end(), a) - vmax.begin();
            if(indx==0) cout<<0<<" ";
            else cout << pre[indx - 1] << " ";
        }
        cout << endl;
    }
}