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
    int n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> a >> b;
    n = b - a;
    // a=a|b;
    // cout<<log2(1024)<<" "<<log2(1000000)<<endl;
    rep(i, a, b)
    {
        int bb = 0;
        per(j, 20, -1)
        {
            if (b & (1 << j))
                bb += (1 << j);
            else if (i & (1 << j))
            {
                bb += (1 << j);
                break;
            }
        }
        l = min(l, i + (i | bb));
    }
    cout << min(n, l + (1 - a - b)) << endl;
    // c = a;
    // k = b;
    // j = 1;
    // while (i < 100000 and k<1000000)
    // {
    //     if (k == (c | k) or c == k)
    //     {
    //         // cout << j << endl;
    //         break;
    //     }
    //     k++;
    //     j++;
    //     i++;
    // }
    // c = a;
    // k = b;
    // l = min(l, j);
    // i = 0;
    // j = 1;
    // while (i < 100000 and c<1000000)
    // {
    //     if (c == (c | k) or c == k)
    //     {
    //         // cout << min(j,min(l,n)) << endl;
    //         break;
    //     }
    //     c++;
    //     j++;
    //     i++;
    // }
    // c = a;
    // k = b;
    // l = min(l, j);
    // i = 0;
    // j = 1;
    // while (i < 100000 and c<1000000)
    // {
    //     if (c == k)
    //     {
    //         // cout << min(j,min(l,n)) << endl;
    //         break;
    //     }
    //     c = c | k;
    //     j++;
    //     i++;
    // }
    // cout << min(l, min(j, n)) << endl;
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