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
// vector<ll>ans(n);
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    vector<vector<array<ll, 2>>> v(n);
    vector<ll> vec(n), ar(n - 1);
    rep(i, 0, n - 1)
    {
        cin >> a >> b;
        v[--a].pb({--b, i});
        v[b].pb({a, i});
        vec[a]++;
        vec[b]++;
    }
    // sort(all(vec));
    if (*max_element(all(vec)) > 2)
    {
        cout << -1 << endl;
        return;
    }
    function<void(ll, ll, ll c)> dfs = [&](ll j, ll p, ll c)
    {
        for (auto &[u, i] : v[j])
        {
            if (u != p)
            {
                ar[i] = c;
                dfs(u, j, c ^ 1);
            }
        }
    };
    dfs(min_element(vec.begin(), vec.end()) - vec.begin(), -1, 0);
    // dfs(min_element(deg.begin(), deg.end()) - deg.begin(), -1, 0);
    for (auto &x : ar)
        cout << x + 2 << " ";
    cout << endl;
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