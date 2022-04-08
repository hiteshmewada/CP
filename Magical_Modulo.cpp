#pragma GCC optimize ("trapv")
#include <bits/stdc++.h>
#include<algorithm>
#include <vector>
#include<sstream>
#include <string.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(),v.end()
#define  rep(i,n,v) for(i=n;i<v;i++)
#define per(i,n,v) for(i=n;i>v;i--)
#define ll  long long
#define ld  long double
#define ff first 
#define ss second 
#define mp make_pair
typedef pair<ll,ll> pl;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef vector<vl> vvl;
const ll mod=1e9+7;
#define PI 3.1415926535897932384626
#define endl "\n"
 
#define set_bits __builtin_popcountll
#define sp(x,y) fixed<<setprecision(y)<<x
#define sz(x) ((ll)(x).size())
#ifndef ONLINE_JUDGE
#define deb(x); cerr << #x << "=";_print(x); cerr<<endl;
#else
#define deb(x)
#endif
#ifndef ONLINE_JUDGE
#define deb2(x, y); cerr << #x << "=";_print(x); cerr<< ", " << #y << "=";_print(y);cerr<< endl;
#else
#define deb(x)
#endif
void _print(int a){cerr<<a;}
void _print(ll a){cerr<<a;}
void _print(char a){cerr<<a;}
void _print(string a){cerr<<a;}
void _print(bool a){cerr<<a;}
template<class T> void _print(vector<T>a){cerr<<"[";for(T x:a){_print(x);cerr<<",";}cerr<<"]";}
template<class T,class V> void _print(pair<T,V>a){cerr<<"{";_print(a.ff);cerr<<", ";_print(a.ss);cerr<<"}";}
template<class T,class V> void _print(map<T,V>a){cerr<<"{";for(auto x:a){_print(x);cerr<<" ";}cerr<<"}";}
template<class T> void _print(set<T>a){cerr<<"[";for(T x:a){_print(x);cerr<<",";}cerr<<"]";}
void solve()
{
    ll  n, a=0,b=0,m=1, c=0,k=0, i=0, j=0, l=1e9+5;
    string s,p, q;
    cin >> n;
    vl v(n);
    set<ll> st;
    rep(i, 0, n)
    {
        cin >> v[i];
        st.insert(v[i]);
        k += v[i];
    }
    if (st.size() != n)
    {
        cout << "NO" << endl;
        return;
    }
    ll sum = (n * (n + 1)) / 2;
    
    ll ans = k - sum;
    if(ans<0){
        cout << "NO" << endl;
        return;
    }
    vl fac;
    for (i = 1; i*i <= ans; i++)
    {
        if (ans % i == 0)
        {
            deb2(i,ans/i);
            if (ans / i == i)
            {
                if (i > n and i <= 2e7)
                    fac.pb(i);
            }
            else
            {
                if (i > n and i <= 2e7)
                    fac.pb(i);
                if ((ans / i) > n and (ans / i) <= 2e7)
                    fac.pb(ans / i);
            }
        }
    }
    deb(fac);
    // function<void(ll, ll)> dfs = [&](ll cur, ll par)
    function<bool(vector<ll>)> check = [&](vector<ll> v)
    {
        sort(all(v));
        deb(v);
        ll i;
        rep(i, 1, v.size() + 1)
        {
            if (v[i-1] != i)
                return false;
        }
        deb(1);
        return true;
    };
    rep(i, 0, fac.size())
    {
        vl temp;
        rep(j, 0, n)
        {
            temp.pb(v[j] % fac[i]);
        }
        if (check(temp))
        {
            cout << "YES " << fac[i] << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
// freopen("Error.txt","w",stderr);
#endif
    
    ios_base::sync_with_stdio(false);
    cin. tie(0);cout. tie(0);
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}