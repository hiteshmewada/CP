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
bool check(vector<ll> &v)
{
    int i = 0, j = v.size() - 1;
    // while(v[i++]==v[j--]) continue;
    vector<ll> res = v;
    reverse(all(res));
    if (res == v)
        return true;
    else
        return false;
}
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    ll ar[n];
    rep(i, 0, n) cin >> ar[i];
    set<ll> st;
    j = n - 1;
    rep(i, 0, n)
    {
        if (i >= j)
            break;
        if (ar[i] == ar[j])
        {
            j--;
            if (j < 0)
                break;
        }
        else
        {
            k = ar[i];
            b = ar[j];
            break;
        }
    }
    vector<ll> v, v1;
    rep(i, 0, n)
    {
        if (ar[i] == k)
            continue;
        else
            v.pb(ar[i]);
    }
    if (check(v))
    {
        cout << "YES" << endl;
        return;
    }
    rep(i, 0, n)
    {
        if (ar[i] == b)
            continue;
        else
            v1.pb(ar[i]);
    }
    if (check(v1))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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