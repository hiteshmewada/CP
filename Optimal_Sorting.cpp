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
    cin >> n;
    ll ar[n];
    vector<ll> v, vec, v1;
    multiset<ll> s1, s2;
    rep(i, 0, n)
    {
        cin >> ar[i];
        v.pb(ar[i]);
    }
    sort(all(v));
    rep(i, 0, n)
    {
        s1.insert(ar[i]);
        s2.insert(v[i]);
        if (s1 == s2)
        {
            k += (*s1.rbegin() - *s1.begin());
            s1.clear();
            s2.clear();
        }
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