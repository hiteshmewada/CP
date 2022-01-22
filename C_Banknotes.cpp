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
    ll n, a = 0, b = 0, m = 1, c = -1, k = 0, i = 0, j = 0, l = 1e9;
    string s, p, q;
    cin >> n >> a;
    ll ar[n];
    rep(i, 0, n)
    {
        cin >> ar[i];
        ar[i] = pow(10, ar[i]);
    }
    ll ans = 0;
    rep(i, 0, n)
    {
        ll val = (i == (n - 1)) ? 1000000001 : (ar[i + 1] - ar[i]) / ar[i];
        if ((k + val) > a)
        {
            ans += ar[i] * (a - k + 1);
            break;
        }
        k += val;
        ans += val * ar[i];
        // cout<<ans<<endl;
    }
    cout << ans << endl;
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