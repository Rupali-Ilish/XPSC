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
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        int dp[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else 
                {
                    dp[i][j] = 0;
                }
            }
        }

        int mx = 0;
        int ci, cj;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (dp[i][j] > mx)
                {
                    mx = dp[i][j]; 
                    ci = i;
                    cj = j;
                }
            }
        }
        string ans;
        while (ci != 0 && cj != 0)
        {
            if (a[ci - 1] == b[cj - 1])
            {
                ans += a[ci - 1];
                ci--;
                cj--;
            }
            else 
            {
                break;
            }
        }

        cout << n + m - 2 * ans.size() << endl;
    }
}