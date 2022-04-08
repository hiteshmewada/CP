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
    cerr << #x << "=";         \
    _print(x);                 \
    cerr << ", " << #y << "="; \
    _print(y);                 \
    cerr << endl;
#define deb(x)         \
    cerr << #x << "="; \
    _print(x);         \
    cerr << endl;
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
ll mer(vector<ll> &v, vector<ll> &temp, ll l, ll md, ll r)
{
    ll i = l, j = md, k = l, cnt = 0;
    while (i <= md - 1 and j <= r)
    {
        if (v[i] <= v[j])
            temp[k++] = v[i++];
        else
        {
            temp[k++] = v[j++];
            cnt += (md - i);
        }
    }
    while (i <= md - 1)
        temp[k++] = v[i++];
    while (j <= r)
        temp[k++] = v[j++];
    for (ll c = l; c <= r; c++)
        v[c] = temp[c];
    return cnt;
}
ll _merge(vector<ll> &v, vector<ll> &temp, ll l, ll r)
{
    ll cnt = 0;
    if (r > l)
    {
        ll md = l + (r - l) / 2;
        cnt += _merge(v, temp, l, md);
        cnt += _merge(v, temp, md + 1, r);
        cnt += mer(v, temp, l, md + 1, r);
    }
    return cnt;
}
ll merge(vector<ll> &v, ll n)
{
    vl temp(n);
    return _merge(v, temp, 0, n - 1);
}
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    vl v(n), v1(n);
    map<ll, ll> mp;
    rep(i, 0, n)
    {
        cin >> v[i];
        if (mp[v[i]])
            k = 1;
        mp[v[i]]++;
    }
    rep(i, 0, n) cin >> v1[i];
    vl v2, v3;
    v2 = v;
    v3 = v1;
    sort(all(v2));
    sort(all(v3));
    if (v2 != v3)
    {
        cout << "No";
        return;
    }
    if (k)
    {
        cout << "Yes";
        return;
    }
    k = 0;

    if (merge(v, n) % 2 != merge(v1, n) % 2)
        cout << "No";
    else
        cout << "Yes";
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
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}