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
    char st;
    cin >> s;
    rep(i, 0, n)
    {
        if (i + 1 < n and i + 2 < n and s[i] == 'a' and s[i + 1] == 'b' and s[i + 2] == 'c')
        {
            k++;
            i += 2;
        }
    }
    while (a--)
    {
        cin >> b >> st;
        b--;
        if (s[b] == st)
        {
            cout << k << endl;
        }
        else
        {
            if (s[b] == 'a' and b + 1 < n and b + 2 < n and s[b + 1] == 'b' and s[b + 2] == 'c')
                k--;
            else if (s[b] == 'b' and b - 1 >= 0 and b + 1 < n and s[b + 1] == 'c' and s[b - 1] == 'a')
                k--;
            else if (s[b] == 'c' and b - 1 >= 0 and b - 2 >= 0 and s[b - 1] == 'b' and s[b - 2] == 'a')
                k--;
            s[b] = st;
            if (s[b] == 'a' and b + 1 < n and b + 2 < n and s[b + 1] == 'b' and s[b + 2] == 'c')
                k++;
            else if (s[b] == 'b' and b - 1 >= 0 and b + 1 < n and s[b + 1] == 'c' and s[b - 1] == 'a')
                k++;
            else if (s[b] == 'c' and b - 1 >= 0 and b - 2 >= 0 and s[b - 1] == 'b' and s[b - 2] == 'a')
                k++;
            cout << k << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}