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
bool pos(ll n, ll a, ll md)
{
    n -= a;
    md--;
    for (int i = 30; i >= 0; i--)
    {
        if (1 & (a >> i))
        {
            int c = min(md, n / (1ll << i));
            n -= (1ll << i) * c;
        }
    }
    return n == 0;
}
const ll mod = 1e9 + 7;
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a;
    swap(n, a);
    b = 1, m = 1e9 + 1;
    while (b < m)
    {
        ll md = b + (m - b) / 2;
        if (pos(n, a, md))
            m = md;
        else
            b = md + 1;
    }
    if (m > 1e9)
        cout << -1 << endl;
    else
        cout << m << endl;
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