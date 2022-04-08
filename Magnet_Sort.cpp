#pragma GCC optimize("trapv")
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(), v.end()
#define rep(i, n, v) for (i = n; i < v; i++)
#define per(i, n, v) for (i = n; i > v; i--)
#define ll long long
#define ld long double
#define ff first
#define ss second
#define mp make_pair
typedef pair<ll, ll> pl;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef vector<vl> vvl;
const ll mod = 1e9 + 7;
#define PI 3.1415926535897932384626
#define endl "\n"

// <<"{";for(auto x:a){_print(x);cerr<<" ";}cerr<<"}";}
template <class T>
void _print(set<T> a)
{
    cerr << "[";
    for (T x : a)
    {
        _print(x);
        cerr << ",";
    }
    cerr << "]";
}
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    vl v(n);
    rep(i, 0, n) cin >> v[i];
    cin >> s;
    vl vec = v;
    sort(all(vec));
    if (vec == v)
        cout << 0 << endl;
    else
    {
        rep(i, 0, n)
        {
            if (s[i] == 'N')
                b++;
            else
                c++;
        }
        if (b == n or c == n)
        {
            cout << -1 << endl;
        }
        else
        {
            rep(i, 0, n)
            {
                if (v[i] != vec[i])
                {
                    b = i;
                    break;
                }
            }
            per(i, n - 1, -1)
            {
                if (v[i] != vec[i])
                {
                    c = i;
                    break;
                }
            }
            rep(i, 0, b + 1)
            {
                if (s[i] != s[c])
                {
                    k = 1;
                    break;
                }
            }
            per(i, n - 1, c - 1)
            {
                if (s[i] != s[b])
                {
                    k = 1;
                    break;
                }
            }
            if (s[b] == s[c] and k == 0)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
// freopen("Error.txt","w",stderr);
#endif
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