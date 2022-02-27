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
#define mp make_pair
#define ll long long
#define ld long double
typedef pair<ll, ll> pl;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef vector<vl> vvl;
ll powermod(ll x, ll y, ll p);
const ll mod = 998244353;
#define PI 3.1415926535897932384626
#define endl "\n"
/*
   2 2
   3 1
   ans - 2a,1b 1a
       1a 2a,1b
   3 2
   3 1 1
   ans - 0
   3 2
   4 1 1
   ans - 0
   3 2
   5 1 1 ans=5
   3 3
   5 1 1 ans=3
   3,3,1
   1,3,3
   3,1,3
   ans - 3a,1b,1c 1a 1a 2times
           1a 3a,1b,1c 1a
           1a 1a 3a,1b,1c
           2a,1b 2a,1c 1a
           2a,1b 1a 2a,1c
           2a,1c .....6 times
            1) For one thing to be Majority (let X) , we should take care for each non major element such that there must be one X variable, so that we can pair them and break our problem in 2 parts -> distributed combined units and distributed remaining X's
            2) Star and Bar formula
            3) for checking majority of X we can use +1 for X and -1 for other things, at last sum should be positive
            4) nCr can be found in O(r) even if n is big
*/
// Always use 1ll when doing 2 to the power
ll sz = 1000;
vl fact(sz);
void init(ll m)
{
    ll fac = 1;
    for (int i = 2; i < sz; i++)
    {
        fac *= i;
        fac %= m;
    }
    fact[sz - 1] = powermod(fac, m - 2, m);
    for (int i = sz - 2; i >= 0; i--)
    {
        fact[i] = fact[i + 1] * (i + 1) % m;
    }
}
ll ncr(ll n, ll r, ll m)
{
    r = min(r, n - r);
    ll res = 1;
    for (int i = 1; i <= r; i++)
    {
        res *= n - r + i;
        res %= m;
    }
    return res * fact[r] % m;
}
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a;
    vl v(n);
    rep(i, 0, n) cin >> v[i];
    rep(i, 1, n) v[0] -= v[i];
    v[0] -= a;
    if (v[0] < 0)
        cout << 0 << endl;
    else
    {
        k = 1;
        init(mod);
        rep(i, 1, n)
        {
            k *= ncr(v[i] + a - 1, a - 1, mod);
            k %= mod;
        }
        k *= ncr(v[0] + a - 1, a - 1, mod);
        cout << k % mod << endl;
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