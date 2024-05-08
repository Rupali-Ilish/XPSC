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

int main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];

        bool ok = true;
        ll bzeromx = 0; // 0 er jonno max koto
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                ok = false;
                break;
            }
            if (b[i] == 0)
            {
                bzeromx = max(bzeromx, a[i] - b[i]);
            }
            else
            {
                s.insert(a[i] - b[i]);
            }
        }
        //dif = *s.begin();
        if(!ok) NO;
        else if(s.size()==0) YES;
        else if(s.size() > 1) NO;
        else if((*s.begin()) < bzeromx) NO;
        else if(ok) YES;
        else NO;
    }
}