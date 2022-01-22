// PROBLEM STATEMENT: https://atcoder.jp/contests/arc126/tasks/arc126_a
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
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = -1, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a >> m;
    i = a;
    j = m;
    m = i / 2;
    a = j;

    vector<vector<ll>> v{{0, 1, 1}, {2, 0, 1}, {1, 2, 0}, {3, 1, 0}, {5, 0, 0}};

    for (auto x : v)
    {
        ll h1, h2, h3;
        h1 = x[0];
        h2 = x[1];
        h3 = x[2];
        ll h = n + a + m;
        if (h1 > 0)
            h = min(h, n / h1);
        if (h2 > 0)
            h = min(h, a / h2);
        if (h3 > 0)
            h = min(h, m / h3);
        k += h;
        // cout << k << endl;
        n -= h * h1;
        a -= h * h2;
        m -= h * h3;
    }

    cout << k << endl;
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