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
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
#define ff first
#define ss second
#define pp pair<ll, ll>
#define mp make_pair
#define ll long long
#define ld long double
typedef pair<ll, ll> pl;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef vector<vl> vvl;
ll powermod(ll x, ll y, ll p);
const ll mod = 1e9 + 7;
#define PI 3.1415926535897932384626
#define endl "\n"

// Always use 1ll when doing 2 to the power
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a;
    vl ar(n);
    // for (auto x : ar)
    //     cin >> x;
    rep(i,0,n) cin>>ar[i];
    vvl adj(n);
    rep(i, 0, n - 1)
    {
        cin >> b >> m;
        b--;
        m--;
        adj[b].pb(m);
        adj[m].pb(b);
    }
    vvl ans(n);
    
    function<void(ll, ll)> dfs = [&](ll cur, ll par)
    {
        for (auto x : adj[cur])
        {
            if (x == par)
                continue;
            dfs(x, cur);
        }
        vl v;
        v.pb(ar[cur]);
        for (auto x : adj[cur])
        {
            if (x == par)
                continue;
            for (auto y : ans[x])
                v.pb(y);
        }
        sort(all(v), greater<ll>());
        ll aa=v.size(),bb=20;
        ll mn=min(aa,bb);
        rep(i, 0, mn) ans[cur].pb(v[i]);
    };
    dfs(0, -1);
    rep(i, 0, a)
    {
        cin >> j >> k;
        j--;
        k--;
        cout << ans[j][k] << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
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