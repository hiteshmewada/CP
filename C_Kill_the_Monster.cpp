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
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a >> b >> m;
    ll op1, op2, op3;
    cin >> op1 >> op2 >> op3;
    i = ceil(n / m);
    j = ceil(b / a);
    while (op1)
    {
        if (i >= j)
            break;
        ll ii = ceil((n + op3) / (m)), jj = ceil(b / (a + op2));
        ll o1 = ii - i, o2 = j - jj;
        if (o1 > o2)
        {
            if (o1 < 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                n += op3;
                i = ii;
            }
        }
        else
        {
            if (o2 < 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                a += op2;
                j = jj;
            }
        }
        op1--;
    }
    if (i >= j)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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