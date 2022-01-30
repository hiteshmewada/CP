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
ll LIS(vector<ll> v)
{
    vector<ll> res;
    res.reserve(v.size());
    for (auto x : v)
    {
        auto it = lower_bound(all(res), x);
        if (it == res.end())
            res.pb(x);
        else
            *it = x;
    }
    return res.size();
}
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    ll ar[n], br[n];
    map<ll, ll> mp;
    vector<pair<ll, ll>> v;
    rep(i, 0, n) cin >> ar[i];
    rep(i, 0, n)
    {
        cin >> br[i];
        mp[br[i]] = i;
    }
    rep(i, 0, n)
    {
        a = ar[i];
        while (a <= n)
        {
            b = mp[a];
            v.pb(make_pair(i, b));
            a += ar[i];
        }
    }
    sort(all(v), [&](const pair<ll, ll> &a, const pair<ll, ll> &b)
         {
        if(a.ff!=b.ff)
            return a.ff<b.ff;
        else return a.ss>b.ss; });
    vector<ll> vec;
    for (auto x : v)
    {
        vec.pb(x.ss);
        // cout<<x.ss<<" ";
    }
    //     rep(i, order.size()) {
    //     vector<int>::iterator iter = lower_bound(
    //         order.begin(), order.end(), index_pairs[i].second);

    //     *iter = index_pairs[i].second;
    //     rep(i,order.size()) cout<<order[i]<<endl;
    //   }
    //   return lower_bound(order.begin(), order.end(), inf) - order.begin();
    cout << LIS(vec) << endl;
    // vector<ll>order(v.size(),l);
    // rep(i,0,order.size()){
    //     auto it=lower_bound(all(order),v[i].ss);
    //     *it=v[i].ss;
    // }
    // cout<<lower_bound(all(order),l)-order.begin();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}