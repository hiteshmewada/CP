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
ll fun(multiset<ll>&st,bool &node){
    ll ans=0;
    if(st.size()>0 and node){
        ll val=(*st.rbegin());
        ans+=val;
        st.erase(st.find(val));
    }
    else node=false;
    return ans;
}
pair<ll,ll>add(ll mask,vector<ll>&v){
    multiset<ll>even,odd;
    for(auto x:v){
        if(x%2) odd.insert(x);
        else even.insert(x);
    }
    // deb2(even,odd)
    // for(auto x:even) cout<<x<<" ";
    bool nodex=true,nodey=true;
    ll alice=0,bob=0;
    while(nodex or nodey){
        if(mask==0){
            alice+=fun(even,nodex);
            bob+=fun(even,nodey);
            // nodex=false;nodey=false;
            // deb2(alice,bob)
            mask=3;
        }
        else if(mask==1){
            alice+=fun(even,nodex);
            bob+=fun(odd,nodey);
            mask=2;
        }
        else if(mask==2){
            alice+=fun(odd,nodex);
            bob+=fun(even,nodey);
            mask=1;
        }
        else if(mask==3){
            alice+=fun(odd,nodex);
            bob+=fun(odd,nodey);
            mask=0;
        }
    }
    return {alice,bob};
}
void solve()
{
    ll  n, a=0,b=0,m=1, c=0,k=0, i=0, j=0, l=1e9+5;
    string s,p, q;
    cin>>n;
    vl v(n);
    rep(i,0,n) cin>>v[i];
    vector<pair<ll,ll>> vec;
    rep(i,0,4){
        vec.pb(add(i,v));
    }
    // for(auto x:vec) cout<<x.ff<<" "<<x.ss<<endl;
    if(vec[0].ss==vec[1].ss) k=max(k,max(vec[0].ff,vec[1].ff));
    else if(vec[0].ss>vec[1].ss) k=max(k,vec[0].ff);
    else k=max(k,vec[1].ff);
    if(vec[2].ss==vec[3].ss) k=max(k,max(vec[2].ff,vec[3].ff));
    else if(vec[2].ss>vec[3].ss) k=max(k,vec[2].ff);
    else k=max(k,vec[3].ff);
    cout<<k<<endl;
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