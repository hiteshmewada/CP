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

void solve()
{
    ll n, a = 0, b = 0, m = 1, c = -1, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    unordered_map<ll, ll> mp;
    rep(i, 0, n)
    {
        cin >> a >> b;
        mp[a + b]++;
    }
    rep(i, 2, n + 2)
    {
        if (mp[i] == i - 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    j = n - 1;
    rep(i, n + 2, 2 * n + 1)
    {
        if (mp[i] == j)
        {

            cout << "NO" << endl;
            return;
        }
        j--;
    }
    cout << "YES" << endl;
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