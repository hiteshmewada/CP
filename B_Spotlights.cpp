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
    ll n, a = 0, b = 0, m = 1, c = -1, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a;
    ll ar[n][a];
    rep(i, 0, n) rep(j, 0, a) cin >> ar[i][j];
    rep(i, 0, n)
    {
        bool hit = false;
        rep(j, 0, a)
        {
            if (ar[i][j] == 1)
                hit = true;
            if (hit and ar[i][j] == 0)
                k++;
        }
    }
    per(i, n - 1, -1)
    {
        bool hit = false;
        per(j, a - 1, -1)
        {
            if (ar[i][j] == 1)
                hit = true;
            if (hit and ar[i][j] == 0)
                k++;
        }
    }
    rep(i, 0, a)
    {
        bool hit = false;
        rep(j, 0, n)
        {
            if (ar[j][i] == 1)
                hit = true;
            if (hit and ar[j][i] == 0)
                k++;
        }
    }
    per(i, a - 1, -1)
    {
        bool hit = false;
        per(j, n - 1, -1)
        {
            if (ar[j][i] == 1)
                hit = true;
            if (hit and ar[j][i] == 0)
                k++;
        }
    }
    cout << k << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}