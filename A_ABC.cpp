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
    cin >> n >> s;
    if (n == 2 and s[0] == s[1])
    {
        cout << "NO" << endl;
    }
    else if (n == 1 or n == 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        // rep(i, 0, n)
        // {
        //     if (i + 1 < n and s[i + 1] == s[i])
        //     {
        //         cout << "NO" << endl;
        //         return;
        //     }
        // }
        cout << "NO" << endl;
    }
    // rep(i, 0, n)
    // {
    //     m++;
    //     b = 0;
    //     p = "";
    //     rep(j, i + 1, n)
    //     {
    //         p += s[j];
    //         b++;
    //         if (b == m)
    //             break;
    //     }
    //     q = p;
    //     reverse(all(q));
    //     cout<<p<<endl;
    //     if (p == q)
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    // }
    // cout << "YES" << endl;
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