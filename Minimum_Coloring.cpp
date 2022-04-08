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
    cin>>n>>a;
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    vvl mat;
    rep(i,0,n){
        vl v;
        b=0;
        if(i%2==0) b=1,c=2;
        else b=2,c=1;
        rep(j,0,a){
            if(j%2) v.pb(c);
            else v.pb(b);
        }
        mat.pb(v);
    }
    // for(auto x:mat){
    //     for(auto y:x) cout<<y<<" ";
    //     cout<<endl;
    // }
    x1--;
    y1--;x2--;y2--;
    if(mat[x1][y1]==1){
        if(mat[x2][y2]!=2){
            mat[x2][y2]=2;
            if(x2-1>=0) mat[x2-1][y2]=3;
            if(y2-1>=0) mat[x2][y2-1]=3;
            if(x2+1<n) mat[x2+1][y2]=3;
            if(y2+1<a) mat[x2][y2+1]=3;
        }
    }
    else{
        if(mat[x2][y2]==2){
            mat[x1][y1]=1;
            if(x1-1>=0) mat[x1-1][y1]=3;
            if(y1-1>=0) mat[x1][y1-1]=3;
            if(x1+1<n) mat[x1+1][y1]=3;
            if(y1+1<a) mat[x1][y1+1]=3;
        }
        else{
            rep(i,0,n){
                 b=0;
             if(i%2==0) b=1,c=2;
            else b=2,c=1;
            rep(j,0,a){
            if(j%2) mat[i][j]=b;
            else mat[i][j]=c;
                    }
            }
       
        }
}
    for(auto x:mat){
        for(auto y:x) cout<<y<<" ";
        cout<<endl;
    }
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