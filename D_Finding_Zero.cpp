#pragma GCC optimize("trapv")
#include <bits/stdc++.h>
#include <iostream>
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
// #define endl "\n"

void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    map<ll, ll> mp, mp2;
    cout << "? 1 2 3" << endl;
    cin >> a;
    cout << "? 1 3 4" << endl;
    cin >> b;
    if (a > b)
        i = 3, j = 4;
    else
        i = 2, j = 3;
    b = 0;
    rep(k, 1, n + 1)
    {
        if (k == i or k == j)
            continue;
        cout << "? " << i << " " << j << " " << k << endl;
        cin >> a;
        b = max(b, a);
        mp[a] = k;
    }
    k = mp[b];
    set<ll> st;
    b = 0;
    rep(j, 1, n + 1)
    {
        if (j == i or j == k)
            continue;
        cout << "? " << i << " " << j << " " << k << endl;
        cin >> a;
        st.insert(a);
        b = max(b, a);
        mp2[a] = j;
    }
    if (st.size() == 1)
        cout << "! " << i << " " << k << endl;
    else
    {
        cout << "! " << mp2[b] << " " << k << endl;
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