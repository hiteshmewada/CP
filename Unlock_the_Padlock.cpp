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
vector<ll>v(44);
ll n,d;
ll dp[41][41][2];
ll rec(ll i, ll j, bool bit)
{
    ll &res=dp[i][j][bit];
    if (i > j)
        return res=0;
    if (res != -1)
        return res;
    ll k=0;
    if(!bit){
        if(i>1) k=d-v[i-1];
    }
    else{
        if(j<n) k=d-v[j+1];
    }
    ll l=v[i]+k+d,r=v[j]+k+d;
    l%=d;r%=d;
    if(i==j) return res=min(l,d-l);
    ll ans=min(l,d-l)+rec(i+1,j,0);
    ans=min(ans,min(r,d-r)+rec(i,j-1,1));
    return res=ans;
}
void solve()
{
    ll  a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> d;
    rep(i,1,n+1) cin>>v[i];
    memset(dp,-1,sizeof(dp));
    cout<<rec(1,n,0)<<endl;
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
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}