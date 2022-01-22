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
    cin >> n;
    a = pow(2, 20);
    map<ll, ll> interval;
    map<ll, ll> map;
    int size = 1 << 20;
    interval[size] = 0;
    while (n--)
    {
        cin >> b >> m;
        if (b == 1)
        {
            i = m % a;
            auto itr = interval.upper_bound(i);
            if (itr == end(interval))
            {
                i = 0;
                itr = begin(interval);
            }
            if (itr->ss <= i)
            {
                map[i] = m;
                ll l1 = itr->ss, r1 = i, l2 = i + 1, r2 = itr->ff;
                interval.erase(itr);
                if (l1 != r1)
                    interval[r1] = l1;
                if (l2 != r2)
                    interval[r2] = l2;
            }
            else
            {
                map[itr->ss] = m;
                itr->ss += 1;
                if (itr->ff == itr->ss)
                    interval.erase(itr);
            }
        }
        else
        {
            auto itr = map.find(m % a);
            cout << (itr == end(map) ? -1 : itr->ss) << endl;
        }
    }
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