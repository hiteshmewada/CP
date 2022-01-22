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
ll dp[200001][32];
const ll mod = 1e9 + 7;
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;

    for (int i = 1; i < 200001; i++)
    {
        for (int j = 0; j < 32; j++)
        {

            dp[i][j] = 0;
        }
    }
    for (int i = 1; i < 200001; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            int b = (1 << j);
            dp[i][j] = dp[i - 1][j];
            if ((b & i) > 0)
                dp[i][j]++;
        }
    }
    cin >> m;
    while (m--)
    {
        k = 0;

        cin >> n >> a;
        for (int i = 0; i < 32; i++)
        {
            k = max(k, (dp[a][i] - dp[n - 1][i]));
            // cout<<k<<endl;
        }
        cout << (a - n + 1) - k << endl;
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