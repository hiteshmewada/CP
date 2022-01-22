#pragma GCC optimize("trapv")
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <string.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(), v.end()
#define rep(i, n, v) for (i = n; i < v; i++)
#define per(i, n, v) for (i = n; i > v; i--)
#define ff first
#define ss second
#define pp pair<ll, ll>
#define ll long long
#define ld long double
#define endl "\n"

const ll mod = 1e9 + 7;
ll get(ll x)
{
    return (x * (ll)1 * (x + 1)) / 2;
}
void solve()
{
    ll n, a = 0, b = 0, x, m = 1, c = -1, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> k >> x;
    l = 1;
    ll r = 2 * k - 1, res = 2 * k - 1;
    bool over = false;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (mid >= k)
        {
            over = (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);
        }
        else
            over = (get(mid) >= x);
        if (over)
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}