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

#define set_bits __builtin_popcountll
#define sp(x, y) fixed << setprecision(y) << x
#define sz(x) ((ll)(x).size())
#ifndef ONLINE_JUDGE
#define deb2(x, y)             \
    ;                          \
    cerr << #x << "=";         \
    _print(x);                 \
    cerr << ", " << #y << "="; \
    _print(y);                 \
    cerr << endl;
#else
#define deb2(x, y) ;
#endif
#ifndef ONLINE_JUDGE
#define deb(x)         \
    cerr << #x << "="; \
    _print(x);         \
    cerr << endl;
#else
#define deb(x) ;
#endif
void _print(int a)
{
    cerr << a;
}
void _print(ll a) { cerr << a; }
void _print(char a) { cerr << a; }
void _print(string a) { cerr << a; }
void _print(bool a) { cerr << a; }
template <class T>
void _print(vector<T> a)
{
    cerr << "[";
    for (T x : a)
    {
        _print(x);
        cerr << ",";
    }
    cerr << "]";
}
template <class T, class V>
void _print(pair<T, V> a)
{
    cerr << "{";
    _print(a.ff);
    cerr << ", ";
    _print(a.ss);
    cerr << "}";
}
template <class T, class V>
void _print(map<T, V> a)
{
    cerr << "{";
    for (auto x : a)
    {
        _print(x);
        cerr << " ";
    }
    cerr << "}";
}
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
    /*
        1 5 8 10 6 7 9 10
        1 5 6 7 9 10
        ans-> 1 5 6 7 9 10
    */
    vl pre(n), tail;
    pre[0] = 1;
    tail.pb(v[0]);
    ll len = 1;
    rep(i, 1, n)
    {
        int ind = lower_bound(all(tail), v[i]) - tail.begin();
        deb(ind) if (ind == len)
        {
            len++;
            tail.pb(v[i]);
        }
        else tail[ind] = v[i];
        deb(tail)
            pre[i] = len;
    }
    deb(tail)
        deb(pre)
            vl post(n),
        tail2;
    post[n - 1] = 1;
    rep(i, 0, n) v[i] *= -1;
    tail2.pb(v[n - 1]);
    len = 1;
    per(i, n - 2, -1)
    {
        int ind = lower_bound(all(tail2), v[i]) - tail2.begin();
        deb(ind) if (ind == len)
        {
            len++;
            tail2.pb(v[i]);
        }
        else tail2[ind] = v[i];
        deb(tail2)
            post[i] = len;
    }
    deb(tail)
        deb(pre)
            rep(i, 0, n - 1)
    {
        b = pre[i] + post[i + 1];
        k = max(k, b);
    }
    cout << k << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
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
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}