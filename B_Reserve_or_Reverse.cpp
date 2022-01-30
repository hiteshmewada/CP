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
    cin >> n >> s;
    j = 0;
    map<char, int> mp;
    rep(i, 0, n)
    {
        mp[s[i]]++;
    }
    j = n - 1;
    // cout<<mp['e']<<" ";
    rep(i, 0, n)
    {
        mp[s[i]]--;
        for (auto x : mp)
        {
            ll ii = 0;
            if (x.ss == 0)
                continue;
            // cout << x.ff << " ";
            if (s[i] <= x.ff)
                break;
            else
            {
                while (j >= 0 and j > i)
                {

                    if (s[j] == x.ff)
                    {

                        swap(s[j], s[i]);
                        ii = 1;
                        mp[s[i]]--;
                        j--;
                        break;
                    }
                    mp[s[j]]--;
                    j--;
                }
                if (j <= i or ii)
                    break;
            }
        }
        if (j <= i)
            break;
    }
    cout << s;
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