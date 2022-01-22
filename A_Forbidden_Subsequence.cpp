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
    cin >> s >> p;
    sort(all(s));
    // aaaabbcc - aaaaccbb
    j = 0;
    rep(i, 0, s.size())
    {
        if (s[i] == p[j])
        {
            if (j == (p.size() - 2))
            {
                c = i;
                j++;
                while (i < s.size() and s[i] != p[j])
                    i++;
                if (i < s.size())
                {
                    swap(s[c], s[i]);
                }
                j--;
                i = c;
                continue;
            }
            //     a = i;
            // if (j == (p.size() - 1))
            // {

            //     // cout << s << endl;
            //     // return;
            //     j -= 3;
            // }
            j++;
        }
    }
    cout << s << endl;
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