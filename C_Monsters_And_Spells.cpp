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
    cin >> n;
    ll ar[n], br[n];
    rep(i, 0, n) cin >> ar[i];
    rep(i, 0, n) cin >> br[i];
    stack<pair<ll, ll>> st;
    st.push({ar[0] - br[0] + 1, ar[0]});
    rep(i, 1, n)
    {
        a = ar[i] - br[i] + 1;
        ll start = a;
        while (!st.empty())
        {
            if (st.top().second >= a)
            {
                start = min(st.top().first, start);
                st.pop();
            }
            else
                break;
        }
        st.push({start, ar[i]});
    }
    while (!st.empty())
    {
        b = st.top().second - st.top().first + 1;
        st.pop();
        k += (b * (b + 1)) / 2;
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