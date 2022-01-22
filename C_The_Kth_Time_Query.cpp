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
    cin >> n >> a;
    vector<vector<ll>> v(n + 1);
    map<ll, ll> mp;
    set<ll> st;
    ll ar[n];
    rep(i, 0, n)
    {
        cin >> ar[i];
        if (st.find(ar[i]) == st.end())
        {
            // v.pb(ar[i]);
            v[i + 1].pb(i + 1);
            mp[ar[i]] = i + 1;
        }
        else
        {

            v[mp[ar[i]]].pb(i + 1);
        }
        st.insert(ar[i]);
    }
    // cout<<1<<endl;
    while (a--)
    {
        cin >> b >> m;
        c = mp[b];
        // cout<<c<<endl;
        // cout<<"10"<<endl;
        if (c > n or c <= 0)
            cout << -1 << endl;
        else
        {
            if (m > v[c].size())
                cout << -1 << endl;
            else
                cout << v[c][m - 1] << endl;
        }
    }
    // cout<<1;
    // cout<<mp[0]<<endl;
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