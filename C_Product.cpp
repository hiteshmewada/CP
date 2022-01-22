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
vector<vector<ll>> v;
ll ans = 0, n, a;
const ll mod = 1e9 + 7;
void dfs(ll pos, ll ele)
{
    if (pos == n)
    {
        if (ele == a)
            ans++;
        return;
    }
    for (auto x : v[pos])
    {
        if (ele > (a / x))
            continue;
        dfs(pos + 1, ele * x);
    }
}
void solve()
{
    ll b, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a;
    v.resize(n);
    rep(i, 0, n)
    {
        cin >> b;
        // v.pb(b);
        v[i].resize(b);
        rep(j, 0, b) cin >> v[i][j];
    }
    dfs(0, 1);
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