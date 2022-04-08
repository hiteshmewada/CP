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
    vl v(n);
    map<ll, ll> mp;
    rep(i, 0, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll one = 0, two = 0, three = 0;
    for(auto x:mp){
        two+=x.ss/2;
        if(x.ss%2) one++;
    }
    k=0;
    k+=one;
    if(two%2!=0) one--;
    if(one%2!=0) k+=2;
    cout<<k<<endl;return;
    vl ans;
    map<ll, ll> an;
    
    for (auto x : mp)
    {
        if (x.ss > 4)
            x.ss %= 4;
        b = 0;
        if (x.ss % 4 == 1)
        {
            b = 0;
            one++;
        }
        else if (x.ss % 4 == 2)
        {
            two++;
        }
        else if (x.ss % 4 == 3)
            three++;
        else
            b = 0;
        // k+=b;
    }
    three = (three * 3) % 4;
    // if (one and one % 2)
    // {
    //     k += (one - 1);
    // }
    // else
    //     k += one;
    if(two%2==0) two=0;
    else two=1;
    if (two )
    {
        if (three and three % 2 == 0)
        {
            three=0;
        }
        else if (three and three % 3 == 0)
        {
            three=1;
        }
        else if(three){
            k+=2;
        }
        else if(one){
            k++;
            one--;
        }
        else k+=2;
    }
    if(three){
        if(three%1==0) one++;
        else if(three%2==0) {one--;k++;}
        else k++;
    }
    if(one){
        if(one%2) k+=(one-1)+3;
        else k+=one;
    }
    cout<<k<<endl;
    return;
    if(one and one%2) k+=3;
    else if(one and one%2==0) k+=one;
    if(three) k+=1;
    // else
    //     k += 0;
    // if (three and three % 2)
    //     k += 1;
    // else if (three)
    //     k += 2;
    // if(j%2 and one%2) k+=1;
    // else if(one%2) k+=one/2+3;
    // else if(j%2) k+=2;
    // else k+=one;
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