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
    ll br[64] = {0};
    ll ar[n];
    rep(i, 0, n)
    {
        cin >> ar[i];
        j = 0;
        while (ar[i])
        {
            if (ar[i] % 2)
                br[j]++;
            ar[i] /= 2;
            j++;
        }
        c = max(c, j);
    }
    j = 0;
    rep(i, 0, c + 1)
    {

        if (br[i] > (n - br[i]))
            b = 1;
        else
            b = 0;

        // b=max(br[i],n-br[i]);
        k += b * pow(2, j++);
        // cout<<k<<endl;
    }
    cout << k << endl;
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