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
    cin >> n;
    if (n % 7 == 0)
        cout << n << endl;
    else
    {
        vector<ll> v;
        i = n % 7;
        a = 7 - i;
        b = n;
        c = n % 10;
        if (a + c >= 10)
        {
            cout << b - i << endl;
        }
        else
        {
            cout << b + a << endl;
        }
        // while (n)
        // {
        //     // v.pb(n%10);
        //     if ((n % 10) != 7)
        //         k++;
        //     n /= 10;
        //     j++;
        // }
        // if (a + c < 10)
        //     cout << b + a << endl;
        // else
        // {
        //     rep(i, 0, j) cout << 7;
        //     cout << endl;
        // }
    }
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