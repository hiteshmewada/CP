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
    float hit;
    cin >> n >> a >> hit;
    // hit += 0.5;
    while (n != a)
    {
        if (hit == n)
        {
            k = 1;
            // if(n+1>24 and 1<=a) k=1;
            // else if(n+1<=a) k=1;
            j = n;
        }
        n++;
        if (n > 24)
            n = 0;
    }
    if (j == a)
        k = 0;
    if (k)
        cout << "Yes";
    else
        cout << "No";
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