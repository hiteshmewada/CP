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
bool cmp(string &s1, string &s2)
{
    return count(s1.begin(), s1.end(), '1') < count(s2.begin(), s2.end(), '1');
}

void solve()
{
    ll n, a = 0, b = 0, m = 1, c = -1, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a;

    vector<string> v;
    rep(i, 0, n)
    {
        cin >> s;
        v.pb(s);
    }
    sort(begin(v), end(v), cmp);

    vector<char> res;
    for (auto x : v)
    {
        for (auto y : x)
        {
            res.pb(y);
        }
    }
    // for (auto x : res)
    //     cout << x;
    // cout << endl;
    c = 0;
    i = 0;
    b = 0;
    for (auto y : res)
    {
        if (y == '1' and c == 0)
        {

            c = 1;
        }
        else if (c == 1 and y == '0')
        {
            b++;
        }
    }
    j = 0;
    rep(i, 0, res.size())
    {
        if (res[i] == '1')
        {
            k += b;
            j = 1;
        }
        else if (j)
            b--;
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