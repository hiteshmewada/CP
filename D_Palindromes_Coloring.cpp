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
#define endl "\n"

const ll mod = 1e9 + 7;
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a >> s;
    map<char, ll> mp;
    rep(i, 0, n)
    {
        mp[s[i]]++;
    }
    for (auto x : mp)
    {
        k += (x.ss / 2);
        if (x.ss % 2 == 0)
            x.ss = 0;
        else
            x.ss = 1;
        if (x.ss)
        {
            c += x.ss;
            x.ss = 0;
        }
        // if (x.ss % 2 == 0)
        //     k += (x.ss);
        // if (x.ss % 2)
        // {
        //     c++;
        //     k += (x.ss / 2) * 2;
        // }
    }
    // cout<<k<<endl;

    m = k / a;

    m *= 2;
    c += 2 * (k % a);
    if (c >= a)
        m++;
    cout << m << endl;
    // if (k == 0)
    //     cout << 1 << endl;
    // else
    //     cout << k << endl;
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