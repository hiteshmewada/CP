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
    cin >> n >> a;
    ll ar[n][a];
    rep(i, 0, n) rep(j, 0, a) cin >> ar[i][j];
    vector<vector<ll>> x(n, vector<ll>(a)), y(n, vector<ll>(a));
    rep(i, 0, n)
    {
        rep(j, 0, a)
        {
            x[i][j] = (ar[i][j] + 6) / 7;
            y[i][j] = (ar[i][j] - 1) % 7 + 1;
        }
    }
    string ans = "Yes";
    rep(i, 0, n)
    {
        rep(j, 0, a)
        {
            if (i + 1 < n && x[i][j] != x[i + 1][j] - 1)
                ans = "No";
            if (j + 1 < a && y[i][j] != y[i][j + 1] - 1)
                ans = "No";
            if (j + 1 < a && x[i][j] != x[i][j + 1])
                ans = "No";
            if (i + 1 < n && y[i][j] != y[i + 1][j])
                ans = "No";
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}