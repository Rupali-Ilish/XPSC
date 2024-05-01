#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pb push_back
#define pll pair<ll, ll>
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
ll n, k;
ll v[1000005];
bool check(ll mid)
{
    ll medind = n / 2;
    ll val=0;
    for (ll i = medind; i < n; i++)
    {
        val+= (mid-v[i]);
        if(val>k) return false;
    }
    return true;
}
int main()
{
    fast_io;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v + n);
    if (n == 1)
        cout << v[0] + k << endl;
    else
    {
        ll lo = v[n / 2], hi = v[n - 1] + k;
        ll ans = v[n / 2];
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            if (check(mid))
            {
                ans = mid;
                lo = mid + 1;
            }
            else
                hi = mid - 1;
        }
        cout << ans << endl;
    }
}