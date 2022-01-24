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
ll LIS(vector<ll> nums)
{
    ll n = nums.size();
    if (n == 0)
        return 0;
    vector<ll> v;
    // ll len = 1;
    v.reserve(n);
    for (auto x : nums)
    {
        auto it = upper_bound(all(v), x);
        if (it == v.end())
            v.pb(x);
        else
            *it = x;
    }
    return v.size();
}
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a;
    vector<ll> ar(n), br(a);
    rep(i, 0, n) cin >> ar[i];
    rep(i, 0, a) cin >> br[i];

    j = pathOfLIS(ar);
    k = pathOfLIS(br);
    // cout<<j<<" "<<k<<endl;
    // for(auto x:v) cout<<x<<" ";
    cout << j + k << endl;
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