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
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a;
    vector<ll> v;
    while (n)
    {
        v.pb(n % 10);
        b = max(b, n % 10);
        n /= 10;
    }
    sort(all(v));
    // rep(i, 0, v.size())
    // {
    //     if(a<=0) break;
    //     while (a>0 and v[i]!=9 and v[i] != b)
    //     {
    //         v[i]++;
    //         a--;
    //     }
    // }
    // sort(all(v));
    // b = a / v.size();
    // rep(i, 0, v.size())
    // {
    //     if(v[i]!=9)
    //     v[i]+=b;
    //     else c++;
    // }
    // sort(all(v));
    // rep(i, 0, a % v.size()+c)
    // {
    //     if(v[i]!=9)
    //     v[i]++;
    // }
    rep(i, 1, 10)
    {
        rep(j, 0, v.size())
        {
            if (a <= 0)
                break;
            while (a > 0 and v[j] < i)
            {
                a--;
                v[j]++;
            }
        }
        if (a <= 0)
            break;
    }
    rep(i, 0, v.size())
    {
        m *= v[i];
    }
    cout << m << endl;
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