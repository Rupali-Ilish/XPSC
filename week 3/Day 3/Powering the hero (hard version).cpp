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
void maxHeap(vector<ll> &v, ll x)
{
    v.push_back(x);

    ll cur_indx = v.size() - 1;
    while (cur_indx != 0)
    {
        ll parent = (cur_indx - 1) / 2;
        if (v[parent] < v[cur_indx])
            swap(v[parent], v[cur_indx]);
        else
            break;
        cur_indx = parent;
    }
}
void delHeap_max(vector<ll> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    ll cur_indx = 0;
    while (1)
    {
        ll l_inx = cur_indx * 2 + 1;
        ll r_inx = cur_indx * 2 + 2;
        ll last_inx = v.size() - 1;
        if (l_inx <= last_inx and r_inx <= last_inx)
        {
            if (v[l_inx] >= v[r_inx] and v[l_inx] > v[cur_indx])
            {
                swap(v[l_inx], v[cur_indx]);
                cur_indx = l_inx;
            }
            else if (v[r_inx] >= v[l_inx] and v[r_inx] > v[cur_indx])
            {
                swap(v[r_inx], v[cur_indx]);
                cur_indx = r_inx;
            }
            else
                break;
        }
        else if (l_inx <= last_inx)
        {
            if (v[l_inx] > v[cur_indx])
            {
                swap(v[l_inx], v[cur_indx]);
                cur_indx = l_inx;
            }
            else
                break;
        }
        else if (r_inx <= last_inx)
        {
            if (v[r_inx] > v[cur_indx])
            {
                swap(v[r_inx], v[cur_indx]);
                cur_indx = r_inx;
            }
            else
                break;
        }
        else
            break;
    }
}
int main()
{
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll ans=0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if(x!=0)
            {
                maxHeap(v, x); // max heap insert
            }
            else
            {
                if(!v.empty())
                {
                    ans+=v[0];
                    delHeap_max(v); // max heap theke del
                }
            }
        }
        cout<<ans<<endl;
    }
}

