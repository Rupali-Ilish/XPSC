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

ll n;
vector<vector<int>> bi;

void input_onoff_bits(int x)
{
    vector<int> bit;
    for (int k = 30; k >= 0; k--)
    {
        if (x & (1 << k))
        {
            bit.pb(1);
        }
        else
        {
            bit.pb(0);
        }
    }
    bi.pb(bit);
}

int main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            input_onoff_bits(v[i]);
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (auto it : bi[i])
        //     {
        //         cout << it << " ";
        //     }
        //     cout << endl;
        // }

        vector<ll> sumofsetbits(31); //upore 31 bit ponto nisi, ty
        for (int i = 0; i < 31; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sumofsetbits[i] += bi[j][i];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            bool ok = true;
            for (auto it : sumofsetbits)
            {
                if (it % i != 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                cout << i << " ";
        }
        cout << endl;

        bi.clear();
    }
}
