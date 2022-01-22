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
    ll lo = 1, hi = 1e18;
    l = 1e18;
    cin >> n >> a;
    ll ar[n];
    rep(i, 0, n) cin >> ar[i];
    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        // cout<<mid<<endl;
        j = 0;
        rep(i, 0, n)
        {
            c = ar[i] + mid - 1;
            // j+=c;
            if (i + 1 < n and ar[i + 1] <= c)
            {
                j += ar[i + 1] - ar[i];
            }
            else
                j += mid - 1;
        }
        if (j >= a)
        {
            hi = mid - 1;
            l = min(l, mid);
        }
        else
            lo = mid + 1;
        // cout<<mid<<endl;
    }
    cout << lo-1 << endl;
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