#pragma GCC optimize ("trapv")
#include <bits/stdc++.h>
#include<algorithm>
#include <vector>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cstdlib>
#include<sstream>
#include <string.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(),v.end()
#define  rep(i,n,v) for(i=n;i<v;i++)
#define per(i,n,v) for(i=n;i>v;i--)
#define ff first 
#define ss second 
#define pp pair<ll,ll>
#define ll  long long
#define ld  long double
#define endl "\n"
 
const ll mod=1e9+7;
pair<ll,ll> find_top(vector<string> &s){
    for(ll i=0;i<s.size();i++){
        for(ll j=0;j<s[0].size();j++){
            if(s[i][j]=='#')
            return make_pair(i,j);
        }
    }
 }
vector<string>rotatee(vector<string> &s){
    vector<string>res;
    for(int i=0;i<s.size();i++){
        string tmp="";
        for(int j=s.size()-1;j>=0;j--){
            tmp+=s[j][i];
        }
        res.pb(tmp);
    }
    return res;
}
bool same(vector<string> s, vector<string> t){
    pair<ll,ll> sij=find_top(s);
    pair<ll,ll> tij=find_top(t);
    ll difx=tij.ff-sij.ff;
    ll dify=tij.ss-sij.ss;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s[0].size();j++){
            ll ii=i+difx,jj=j+dify;
            if(ii>=0 && ii<s.size() && jj>=0 && jj<s.size()){
                if(s[i][j]!=t[ii][jj])
                return false;
            }
            else{
                if(s.at(i).at(j)=='#') return false;
            }
        }
    }
    return true;
}
ll cnt(vector<string>s){
    ll k=0;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s[0].size();j++){
            if(s[i][j]=='#')
            k++;
        }
    }
    return k;
}
void solve()
{
ll  n, a=0,b=0,m=1, c=-1,k=0, i=0, j=0, l=1e9+5;
string s,p, q;
    cin>>n;
    vector<string>v,vec;
    rep(i,0,n){
        cin>>s;
        v.pb(s);
    }
    rep(i,0,n){
        cin>>s;
        vec.pb(s);
    }
    if(cnt(v)!=cnt(vec)){
        cout<<"No"<<endl;return;
    }
    bool ok=false;
    rep(i,0,4){
        if(same(v,vec)){
            ok=true;break;
        }
        v=rotatee(v);
    }
    if(ok) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin. tie(0);cout. tie(0);
ll t=1;
//cin>>t;
while(t--)
{
solve();
}
return 0;
}