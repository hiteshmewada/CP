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
    cin >> n;
    ll ar[n];
    vector<ll> v, ans(n, -1);
    rep(i, 0, n)
    {
        cin >> ar[i];
        v.pb(ar[i]);
    }
    cin >> s;
    sort(all(v));
    vector<pair<ll, ll>> mp, mp2;
    rep(i, 0, n)
    {
        if (s[i] == '1')
        {
            mp.pb(make_pair(ar[i], i));
        }
        else
            mp2.pb(make_pair(ar[i], i));
    }
    sort(all(mp));
    sort(all(mp2));
    j = v.size() - mp.size();
    for (auto x : mp)
    {
        ans[x.ss] = v[j++];
    }
    j = 0;
    for (auto x : mp2)
    {
        ans[x.ss] = v[j++];
    }
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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