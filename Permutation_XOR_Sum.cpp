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
    // if (n == 1)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // ll ar[n+1] = {0};
    // per(i, n, 0)
    // {
    //     if (ar[i])
    //         continue;
    //     j = 0;
    //     m = i;
    //     b = 0;
    //     c = 0;
    //     while (m)
    //     {
    //         if (m % 2 == 0)
    //             b += (1 << j);
    //         c += (1 << j);
    //         m /= 2;
    //         j++;
    //     }
    //     if (b == 0 or b > n)
    //         continue;
    //     ar[b] = 1;
    //     k += 2 * c;
    // }
    // rep(i, 0, 32)
    // {
    //     if (ar[i])
    //         k += pow(2, i);
    // }
    k = n * (n + 1);
    while (n)
    {
        if (n & 1)
            k -= 2 * m;
        else
            break;
        m*=2;
        n /= 2;
    }
    // if (n % 2)
    //     k -= 2;
    cout << k << endl;
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