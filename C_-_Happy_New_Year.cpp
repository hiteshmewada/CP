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
#define mpp make_pair
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
    vector<string> v(n);
    rep(i, 0, n) cin >> v[i];
    cin >> s;
    vl vec;
    l = s.size();
    rep(i, 0, l)
    {
        p = "";
        while (i + 1 < l and s[i] != ',')
        {
            p += s[i];
            i++;
        }
        if (i + 1 == l)
            p += s[i];
        vec.pb(stoll(p));
    }
    a = vec.size();
    a /= 2;
    vl ans;
    l = vec.size();
    rep(i, a, l) ans.pb(vec[i]);
    per(i, a - 1, -1) ans.pb(vec[i]);
    vl vacant(n);
    rep(i, 0, n)
    {
        b = 0;
        for (auto x : v[i])
        {
            if (x == '_')
                b++;
        }
        vacant[i] = b;
    }
    deb(vacant)
        deb(ans)
            a = ans.size();
    rep(i, 0, a)
    {
        k = 0;
        rep(j, 0, n)
        {
            deb2(vacant[j], i) if (ans[i] <= vacant[j])
            {
                vacant[j] -= ans[i];
                ll jj = v[j].size();
                deb(v[j]) for (ll ii = 0; ii < jj; ii++)
                {
                    if (!ans[i])
                        break;
                    if (v[j][ii] == '_')
                    {
                        c = i + 1;
                        if (c >= 10)
                        {
                            q = "";
                            for (ll tt = 0; tt < ii; tt++)
                                q += v[j][tt];
                            string temp;
                            temp = to_string(c);
                            ll temp_size = temp.size();
                            for (ll tt = 0; tt < temp_size; tt++)
                                q += temp[tt];
                            for (ll tt = ii + 1; tt < jj; tt++)
                                q += v[j][tt];
                            v[j] = q;
                            jj = q.size();
                        }
                        else
                            v[j][ii] = c + '0';
                        // cout<<v[jj][ii]<<endl;
                        ans[i]--;
                        deb(ans[i])
                    }
                }
                k = 1;
                break;
            }
        }
    }
    i = 0;
    for (auto x : v)
    {
        i++;
        if (i == n)
            cout << x;
        else
            cout << x << endl;
    }
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
    // cin>>t;
    while (t--)
    {
        solve();
    }
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}