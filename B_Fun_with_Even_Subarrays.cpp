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
    ll ar[n];
    rep(i, 0, n) cin >> ar[i];
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    j = 1;
    rep(i, 1, n)
    {
        if (ar[i] == ar[0])
        {
            j++;
        }
        else
        {
            c++;
            j *= 2;
            i = j - 1;
        }
    }
    k = c;
    j = 1;
    c = 0;
    per(i, n - 2, -1)
    {
        if (ar[i] == ar[n - 1])
        {
            j++;
        }
        else
        {
            c++;
            j *= 2;
            i = n - j ;
        }
    }
    k = min(k, c);
    // cout<<1;
    // if (ar[n - 1] == ar[n - 2])
    //     j++;
    // if (j > k)
    // {
    //     k = j;
    //     a = ar[n-1];
    // }
    // b = 0;
    // m = 0;
    // rep(i, 0, n)
    // {
    //     if (a == ar[i] and b == 0)
    //     {
    //         if (ar[i + k - 1] == ar[i])
    //         {
    //             b = i + 1;
    //             m = i + k;
    //             break;
    //         }
    //     }
    //     // else if (a == ar[i])
    //     //     m = i + 1;
    // }
    // cout << b << " " << m << endl;
    // c = 0;
    // j = k;
    // while (b > 1)
    // {
    //     if(b-2>=0 and ar[b-2]==a) {b--;continue;}
    //     b -= j;
    //     j *= 2;
    //     c++;
    // }
    // while (m < n)
    // {
    //     if(m<n and ar[m]==a) {m++;continue;}
    //     m += k;
    //     k *= 2;
    //     c++;
    // }
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