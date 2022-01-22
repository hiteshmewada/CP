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
    cin >> n >> s >> p;
    s = '#' + s, p = '#' + p;
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, l));
    vector<ll> v(n + 1), vec(n + 1);
    rep(i, 1, n + 1) v[i] = v[i - 1] + (s[i] == '1');
    rep(i, 1, n + 1) vec[i] = vec[i - 1] + (p[i] == '1');
    dp[0][0] = 0;
    rep(i, 1, n + 1)
    {
        dp[i][0] = dp[i - 1][0];
        if (s[i] == '0')
            dp[i][0] += v[i - 1];
    }
    rep(j, 1, n + 1)
    {
        dp[0][j] = dp[0][j - 1];
        if (p[j] == '0')
            dp[0][j] += vec[j - 1];
    }
    rep(i, 1, n + 1)
    {
        rep(j, 1, n + 1)
        {
            if (s[i] == '0')
                dp[i][j] = dp[i - 1][j] + v[i - 1] + vec[j];
            else
                dp[i][j] = dp[i - 1][j];
            if (p[j] == '0')
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + v[i] + vec[j - 1]);
            else
                dp[i][j] = min(dp[i][j], dp[i][j - 1]);
        }
    }
    cout << dp[n][n] << endl;
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