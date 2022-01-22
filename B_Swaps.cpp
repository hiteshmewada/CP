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
    cin >> n;
    ll ar[n], br[n];
    map<ll, ll> mp;
    rep(i, 0, n) cin >> ar[i];
    rep(i, 0, n) cin >> br[i];
    vector<pair<ll, ll>> v;
    rep(i, 0, n)
    {
        mp[ar[i]] = i;
        v.pb({br[i], i});
    }
    sort(all(v));
    b = INT_MAX;
    // suffix array
    per(i, n - 1, -1)
    {
        b = min(b, v[i].ss);
        v[i].ss = b;
    }
    j = 0;
    for (int i = 1; i <= 2 * n; i += 2)
    {
        ll x = mp[i];
        x += v[j].ss;
        j++;
        l = min(l, x);
    }

    cout << l << endl;
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