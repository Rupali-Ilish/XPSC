#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define pi acos(-1)
#define pll pair<ll, ll>
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define choto(x) sort((x).begin(), (x).end())
#define boro(x) sort((x).rbegin(), (x).rend())
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

ll n, k, pb, ps;
ll p[200005], a[200005];
ll score(ll pb, ll turn)
{
    ll ans = 0;
    ll sum = 0;
    set<ll> s;
    for (ll i = 1; i <= turn; i++)
    {
        sum += a[pb];

        if (s.count(pb))
            break; // ageo chilo same pos, max paisi tkhn
        else
        {
            ll thakbe = a[pb] * (turn - i);

            ans = max(ans, sum + thakbe);

            s.insert(pb);
            pb = p[pb]; // position update
        }
    }
    s.clear();

    return ans;
}
int main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> pb >> ps;

        for (ll i = 1; i <= n; i++)
            cin >> p[i];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];

        // for(auto it: p) cout<<it<<" ";

        ll scoreb = score(pb, k);
        ll scores = score(ps, k);

        // cout<<scoreb<<" "<<scores<<endl;

        if (scoreb > scores)
            cout << "Bodya" << endl;
        else if (scoreb < scores)
            cout << "Sasha" << endl;
        else
            cout << "Draw" << endl;
    }
}