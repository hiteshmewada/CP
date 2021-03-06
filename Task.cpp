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
// #define endl "\n"
 
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
    ll  n, a=0,b=0,m=1, c=0,k=0, i=0, j=0;
    string s,p, q;
    cin>>n;
    // vl v(n);
//     //300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 317 318 319 320 321 322 323 324 325 326 327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 344 345 346 347 348 349 350 351 352 
// 353 354 355 356 357 358 359 360 361 362 363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 378 379 380 381 382 383 384 385 386 387 388 389 390 391 392 393 394 395 396 397 398 399
    // rep(i,300,400) cout<<i<<" ";
    set<ll>st1,st2;
    rep(i,129,129+34) st1.insert(i);
    a=129+34;
    rep(i,a,129+69) st2.insert(i);
    a=accumulate(all(st1),0ll);
    b=accumulate(all(st2),0ll);
    st1.insert(b-a);
    rep(i,0,30) {cout<<(1<<i)<<" ";j++;}
    for(auto x:st1) {cout<<x<<" ";j++;}
    for(auto x:st2) {cout<<x<<" ";j++;}
    cout<<endl;
    // cout<<j;
    vl v(n);
    rep(i,0,n) cin>>v[i];
    sort(all(v));
    ll lsum=v[0],rsum=v[n-1],l=0,r=n-1;
    while(l+1<r){
        if(lsum<=rsum){
            l++;
            lsum+=v[l];
        }
        else{
            r--;
            rsum+=v[r];
        }
    }
    ll two_power_sum=(1ll<<30-1;
    ll diff_before=abs(lsum-rsum);
    ll diff_now=two_power_sum-diff_before;
    diff_now>>=1;
    vector<ll>ans;
    for(auto x:st2) ans.pb(x);
    rep(i,0,30){
        if((diff_now>>i)&1) ans.pb((1ll<<i));
    }
    if(lsum>rsum){
        rep(i,0,l+1) ans.pb(v[i]);
    }
    else{
        rep(i,r,n) ans.pb(v[i]);
    }
    for(auto x:ans) cout<<x<<" ";
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