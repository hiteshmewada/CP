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
    ll ar[n];
    vector<ll> v, vec;
    rep(i, 0, n)
    {
        cin >> ar[i];
        if (ar[i] < 0)
            v.pb(ar[i] * (-1));
        else if (ar[i] > 0)
            vec.pb(ar[i]);
    }
    sort(all(v));
    sort(all(vec));
    for (int i = v.size() - 1; i >= 0; i -= a)
    {
        k += 2 * v[i];
    }
    for (int i = vec.size() - 1; i >= 0; i -= a)
    {
        k += 2 * vec[i];
    }
    // j += 2 * (k + b);
    // k -= max(v[v.size() - 1], vec[vec.size() - 1]);
    if (v.size() and vec.size())
    {
        if (v[v.size() - 1] > vec[vec.size() - 1])
            k -= v[v.size() - 1];
        else
            k -= vec[vec.size() - 1];
    }
    else if (v.size())
        k -= v[v.size() - 1];
    else if (vec.size())
        k -= vec[vec.size() - 1];
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