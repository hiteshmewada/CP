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
ll dsu[31];
ll root(ll i)
{
    if (dsu[i] == i)
        return i;
    return dsu[i] = root(dsu[i]);
}

void Union(ll i, ll j)
{
    ll rota = root(i), rotb = root(j);
    if (rota == rotb)
        return;
    dsu[rota] = rotb;
}

void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    vl v(n), vec;
    rep(i, 0, n)
    {
        cin >> v[i];
        vec.pb(v[i]);
    }
    rep(i, 1, 31) dsu[i] = i;
    sort(all(vec));
    // DSU dsu(32);
    for (auto x : v)
    {
        rep(i, 0, 31)
        {
            rep(j, i + 1, 31)
            {
                if ((x & (1ll << i)) and (x & (1ll << j)))
                    Union(i, j);
            }
        }
    }
    k = 1;
    rep(i, 0, n)
    {
        ll can = 0;
        if (!v[i] and !vec[i])
            continue;
        rep(j, 0, 31)
        {
            rep(c, 0, 31)
            {
                if ((v[i] & (1ll << j)) and (vec[i] & (1ll << c)) and (root(j) == root(c)))
                {
                    can = 1;
                }
            }
        }
        if (can == 0)
        {
            k = 0;
            break;
        }
    }
    if (k)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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