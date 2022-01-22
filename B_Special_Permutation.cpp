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
    cin >> n >> a >> b;
    vector<ll> v, vec;
    v.pb(a);
    set<ll> st;
    for (int i = n; i >= 0; i--)
    {
        if (i <= a or i == b)
            continue;
        v.pb(i);
        st.insert(i);
        if (v.size() == n / 2)
            break;
    }
    vec.pb(b);
    for (int i = 1; i <= n; i++)
    {
        if (i >= b or st.find(i) != st.end() or i == a)
            continue;
        vec.pb(i);
        if (vec.size() == n / 2)
            break;
    }

    if (v.size() + vec.size() == n and v.size() == n / 2 and vec.size() == n / 2)
    {
        for (auto x : v)
            cout << x << " ";
        for (auto x : vec)
            cout << x << " ";

        cout << endl;
    }
    else
        cout << -1 << endl;
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