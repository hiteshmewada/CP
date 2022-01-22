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
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a >> b;
    ll ar[n + 1], br[n];
    vector<ll> v;
    rep(i, 0, n) cin >> ar[i];
    rep(i, 0, n)
    {
        cin >> br[i];
        v.pb(br[i]);
    }
    ar[n] = a;
    ll dp[n + 1][n + 1];
    dp[0][0] = 0;
    rep(i, 1, n + 1)
        dp[0][i] = dp[0][i - 1] + (ar[i] - ar[i - 1]) * br[i - 1];
    rep(i, 1, b + 1)
    {
        dp[i][0] = dp[i - 1][0];
        dp[i][1] = dp[i - 1][1];
        rep(j, 2, n + 1)
        {
            dp[i][j] = dp[i - 1][j];
            for (int j1 = j; j1 > 0 and i - (j - j1) >= 0; j1--)
            {
                ll left = i - (j - j1);
                ll dist = ar[j] - ar[j1 - 1];
                ll time = dist * br[j1 - 1];
                dp[i][j] = min(dp[i][j], dp[left][j1 - 1] + time);
            }
        }
    }
    cout << dp[b][n] << endl;
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