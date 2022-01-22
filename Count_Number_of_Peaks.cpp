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
ll ans = 0, n;
vector<ll> v;
void call()
{
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > v[i + 1] and v[i] > v[i - 1])
            ans++;
        if (v[i] < v[i + 1] and v[i] < v[i - 1])
            ans++;
    }
}
void recurse(int i = 0)
{
    if (i == (n))
    {
        call();
        return;
    }
    for (auto x : {0, 1, 2})
    {
        v[i] = x;
        recurse(i + 1);
    }
}
const ll mod = 1e9 + 7;
void solve()
{
    ll a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    ans = 0;
    v.resize(n);
    recurse();
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