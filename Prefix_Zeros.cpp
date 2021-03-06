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
ll powermod(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = (y >> 1);
        x = (x * x) % p;
    }
    return res;
}
#define endl "\n"

const ll mod = 1e9 + 7;
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a >> s;
    ll low = 1, high = n;
    while (low <= high and high >= 0)
    {
        ll mid = low + (high - low) / 2, ans = 0;
        // cout<<mid<<" ."<<endl;
        per(i, mid - 1, -1)
        {
            m = s[i] - '0';
            m += ans;
            // p = to_string(m);
            // m = p[0] - '0';
            m = m % 10;
            m = 10 - m;
            ans += (m % 10);
        }
        // cout << ans << endl;
        if (ans > a)
            high = mid - 1;
        else
        {
            low = mid + 1;
            k = max(k, mid);
        }
    }
    cout << low - 1 << endl;
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