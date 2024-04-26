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
    ll n, m;
    cin >> n;
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    cin >> m;
    vector<ll> g(m);
    for (ll i = 0; i < m; i++)
        cin >> g[i];

    //    for (auto it : b)
    //        cout << it << " ";
    //    cout << endl;
    //    for (auto it : g)
    //        cout << it << " ";

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    //    for (auto it : b)
    //        cout << it << " ";
    //    cout << endl;
    //    for (auto it : g)
    //        cout << it << " ";
    //    cout << endl;

    ll bi = 0, gi = 0;
    ll cnt = 0;
    while (bi < n and gi < m)
    {
        if (b[bi] > g[gi])
        {
            if (b[bi] - g[gi] <= 1)
            {
                cnt++;
                bi++;
                gi++;
            }
            else
                gi++;
        }
        else if (b[bi] < g[gi])
        {
            if (g[gi] - b[bi] <= 1)
            {
                cnt++;
                bi++;
                gi++;
            }
            else
                bi++;
        }
        else
        {
            cnt++;
            bi++;
            gi++;
        }
    }
    cout << cnt << endl;
}
