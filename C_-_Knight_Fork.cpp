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
    cin >> n >> a >> b >> c;
    vvl v = {{n + 2, a + 1}, {n + 2, a - 1}, {n - 2, a + 1}, {n - 2, a - 1}, {n + 1, a + 2}, {n + 1, a - 2}, {n - 1, a + 2}, {n - 1, a - 2}};
    rep(i, 0, v.size())
    {
        ll e = abs(v[i][0] - n);
        ll d = abs(v[i][1] - a), f = abs(v[i][1] - c);
        m = abs(v[i][0] - b);

        j = e * e + d * d;
        k = f * f + m * m;
        // deb2(j,k);
        if (j == 5 and k == 5)
        {
            cout << "Yes";
            return;
        }
    }
    // if ((abs(b - n) == 1 and abs(c - a) == 1) or (abs(c - a) == 3 and abs(b - n) == 3) or (abs(b - n) == 0 and abs(c - a) == 0))

    // else
    cout << "No";
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