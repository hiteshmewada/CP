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
    cin >> n;
    ll ar[n];
    rep(i, 0, n) cin >> ar[i];
    k += 1;
    rep(i, 0, n)
    {
        if (ar[i] == 1 and i - 1 >= 0 and ar[i - 1] == 1)
            k += 5;
        else if (ar[i] == 1)
            k++;
        else if (ar[i] == 0 and i - 1 >= 0 and ar[i - 1] == 0)
        {
            cout << -1 << endl;
            return;
        }
    }
    if (ar[n - 1] == 0 and n - 2 >= 0 and ar[n - 2] == 0)
    {
        cout << -1 << endl;
        return;
    }
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