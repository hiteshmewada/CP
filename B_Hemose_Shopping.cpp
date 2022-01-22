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
    ll ar[n];
    vector<ll> v;
    rep(i, 0, n)
    {
        cin >> ar[i];
        v.pb(ar[i]);
    }
    if (n / 2 >= a)
    {
        cout << "YES" << endl;
        return;
    }
    sort(all(v));
    b = n - a;
    cin>>
    rep(i, b, a)
    {

        if (ar[i] != v[i])
        {
            cout << "NO" << endl;
            return;
        }

        // if (i + 1 < n and ar[i] <= ar[i + 1])
        // {
        //     k = 1;
        //     j++;
        // }
        // else
        // {
        //     j++;
        //     c = max(c, j);
        //     j = 0;
        // }
    }
    // j++;
    // c = max(c, j);
    // j = 0;
    // if (c < a)
    //     cout << "NO" << endl;
    // else
    cout << "YES" << endl;
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