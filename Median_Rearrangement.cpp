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

    cin >> n >> k;
    vector<ll> v;
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cin >> b;
            v.pb(b);
        }
    }
    sort(all(v));
    ll leftcount = n / 2;
    ll rightcount = n - leftcount - 1;
    ll righttotal = rightcount * n;
    ll ans = -1;
    l = leftcount;
    ll r = n * n - righttotal - (n - 1) - 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll sum = 0;
        ll x = 0, y = mid;
        vector<ll> vis(n * n, 0);
        ll cnt = 0, tot = 0;
        while (tot != n)
        {
            if (cnt == leftcount)
            {
                if (vis[y] == 0)
                {
                    sum += v[y];
                    vis[y] = 1;
                    y++;
                    tot++;
                    cnt = 0;
                }
                else
                    y++;
            }
            else
            {
                if (vis[x] == 0)
                {
                    vis[x] = 1;
                    x++;
                    cnt++;
                }
                else
                    x++;
            }
        }
        if (sum <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ((ans == -1) ? -1 : v[ans]) << endl;
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