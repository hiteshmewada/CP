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
    b = n - 1;
    vector<pair<ll, ll>> v;
    if (n == 4 and a == 3)
        cout << -1 << endl;
    else
    {
        if (a == b)
        {
            v.pb({b, b - 1});
            v.pb({1, 3});
            set<ll> st;
            st.insert(b);
            st.insert(b - 1);
            st.insert(1);
            st.insert(3);
            i = 2;
            j = b - 2;
            c = n / 2 - 2;
            while (c)
            {
                while (st.find(i) != st.end())
                {
                    v.pb({0, j});
                    i++;
                    j--;
                    c--;
                    break;
                }
                if (c <= 0)
                    break;
                while (st.find(j) != st.end())
                {
                    v.pb({i, 0});
                    j--;
                    i++;
                    c--;
                    break;
                }
                if (c <= 0)
                    break;
 
                v.pb({i, j});
                i++;
                j--;
                c--;
            }
        }
        else
        {
            v.pb({b, a});
            set<ll> st;
            st.insert(b);
            st.insert(a);
            i = 1;
            j = b - 1;
            c = n / 2 - 1;
            while (c)
            {
                while (st.find(i) != st.end())
                {
                    v.pb({0, j});
                    i++;
                    j--;
                    c--;
                    break;
                }
                if (c <= 0)
                    break;
                while (st.find(j) != st.end())
                {
                    v.pb({i, 0});
                    j--;
                    i++;
                    c--;
                    break;
                }
                if (c <= 0)
                    break;
                v.pb({i, j});
                i++;
                j--;
                c--;
            }
        }
        for (auto x : v)
            cout << x.ff << " " << x.ss << endl;
        // cout<<endl;
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