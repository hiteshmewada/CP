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
    vector<pair<ll, ll>> v;
    cin >> n;
    rep(i, 0, n)
    {
        cin >> a >> b;
        v.pb({a, b});
    }
    rep(i, 0, n)
    {
        rep(j, i + 1, n)
        {
            rep(a, j + 1, n)
            {
                double d1, d2, d3, sc, ar;
                // d1 = (double)sqrt((double)(v[i].ff - v[j].ff) * (double)(v[i].ff - v[j].ff) +
                //           (double)(v[i].ss - v[j].ss) * (double)(v[i].ss - v[j].ss));
                // d2 = (double)sqrt((double)(v[i].ff - v[a].ff) * (double)(v[i].ff - v[a].ff) +
                //           (double)(v[i].ss - v[a].ss) * (double)(v[i].ss - v[a].ss));
                // d3 = (double)sqrt((double)(v[a].ff - v[j].ff) * (double)(v[a].ff - v[j].ff) +
                //           (double)(v[a].ss - v[j].ss) * (double)(v[a].ss - v[j].ss));
                // sc = (double)((double)(d1 + d2 + d3) / (double)2);
                //     x1 * (y2 - y3)
                // + x2 * (y3 - y1)
                // + x3 * (y1 - y2);
                // ar = (double)sqrt((double)(sc * (sc - d1) * (sc - d2) * (sc - d3)));
                ar = v[i].ff * (v[j].ss - v[a].ss) + v[j].ff * (v[a].ss - v[i].ss) +
                     v[a].ff * (v[i].ss - v[j].ss);
                if (ar !=0)
                    k++;
            }
        }
    }
    cout << k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}