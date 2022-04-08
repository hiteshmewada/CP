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
    vl ar(n);
    rep(i, 0, n) cin >> ar[i];
    // b = 0;
    // rep(i, 0, n - 1)
    // {
    //     if (ar[i] == 0 and ar[i + 1] == 1)
    //         j++;
    //     if (ar[i] == 1 and ar[i + 1] == 0)
    //         j++;
    // }
    // if (j > 2)
    // {
    //     cout << n - 1 << endl;
    //     return;
    // }
    // rep(i, 1, n)
    // {
    //     if (ar[i] == 1)
    //     {
    //         if (ar[i - 1] == 1)
    //         {
    //             b = i;
    //             continue;
    //         }
    //         else
    //         {
    //             k += (i - b);
    //             b = i;
    //             break;
    //             c++;
    //         }
    //     }
    // }
    rep(i, 0, n)
    {
        if (ar[i] == 1)
            k++;
    }
    if (k == n)
    {
        cout << 0 << endl;
        return;
    }
    ll start = 0, end = n - 1;
    rep(i, 0, n)
    {
        if (ar[i] == 1)
            continue;
        else
        {
            start = i - 1;
            break;
        }
    }
    per(i, n - 1, -1)
    {
        if (ar[i] == 1)
            continue;
        else
        {
            end = i + 1;
            break;
        }
    }
    if (start >= end)
        cout << 0 << endl;
    else
        cout << end - start << endl;
    // else cout<<n-1<<endl;
    // j=0;
    // rep(i,0,n-1){
    //     if(ar[i]==0 and ar[i+1]==1 ) j+=(i+1);
    // if(ar[i]==1 and ar[i+1]==0 ) j++;

    // cout << j << endl;
    // else cout<<n-1<<endl;
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