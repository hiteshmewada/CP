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
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0;
    string s, p, q;
    cin >> n;
    vpl  ans;
    vl v;
    function<bool(ll, ll, ll)> query = [&](ll l, ll cur, ll r)
    {
        cout << "? 3 " << l << " " << cur << " " << r << endl;
        cin >> a;
        if (a)
            return 1;
        return 0;
    };
    function<void(vector<ll>)> fun = [&](vector<ll> v)
    {
        if (v.size() == 1 or v.size()==0)
            return;
        if (v.size() == 2)
        {
            ans.pb({v[0], v[1]});
            return;
        }
        ll r = v[1], l=v[0];
        rep(i, 2, v.size())
        {
            if (query(l, v[i], r))
                r = v[i];
        }
        ans.pb({l, r});
        vl lef, rig;
        lef.pb(l);
        rig.pb(r);
        rep(i, 0, v.size())
        {
            if (v[i] == l or v[i] == r)
                continue;
            if (query(l, r, v[i]))
                rig.pb(v[i]);
            else
                lef.pb(v[i]);
        }
        fun(lef);
        fun(rig);
    };
    rep(i,1,n+1) v.pb(i);
    fun(v);
    cout << "!" << endl;
    for (auto x : ans)
        cout << x.ff << " " << x.ss << endl;
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
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}