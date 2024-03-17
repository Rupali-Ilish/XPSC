#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    for (ll i = 0; i <= c; i++)
    {
        for (ll j = 0; j <= c; j++)
        {
            if (i * a + j * b == c)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}
