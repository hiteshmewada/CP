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
#define mpp make_pair
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
#define deb2(x, y); cerr << #x << "=";_print(x); cerr<< ", " << #y << "=";_print(y);cerr<< endl;
#else
#define deb2(x,y); 
#endif
#ifndef ONLINE_JUDGE
#define deb(x) cerr << #x << "=";_print(x); cerr<<endl;
#else
#define deb(x); 
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
    cin>>n>>s;
    // if(n==1) k=1;
    // if(n==2 and (s=="RW" or s=="WR" or s=="WB" or s=="BW")) k=1;
    // rep(i,0,n){
    //     j=0;
    //     while(i+1<n and s[i]==s[i+1]){
    //         if(s[i]=='R' or s[i]=='B') j++;
    //         i++;
    //     }
    //     j++;
    //     if(j>=3) k=1;
    //     if(i-1>=0 and i+1<n and s[i]!='W' and s[i-1]=='W' and s[i+1]=='W') k=1;
    // }
    rep(i,0,n){
        if(s[i]=='R') a++;
        else if(s[i]=='B') b++;
        if(s[i]=='W'){
            if((!a and b) or (a and !b)) k=1;
            a=0;b=0;
        }
    }
    if((!a and b) or (a and !b)) k=1;
            a=0;b=0;
    if(k) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
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
//cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}