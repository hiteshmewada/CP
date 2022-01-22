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
    string s, p = "", q;
    cin >> n >> s;
    if (s[0] == s[1])
    {
        cout << s[0] << s[0] << endl;
        return;
    }
    char st = s[0];
    p += s[0];
    rep(i, 1, n)
    {
        if (s[i] <= st)
        {
            if ((s[i] == st) or s[i] < st)
            {
                p += s[i];
                st = s[i];
            }
            else
                break;
        }
        else
            break;
    }
    q = p;
    reverse(all(q));
    // p+=q;
    p = p + q;
    cout << p << endl;
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