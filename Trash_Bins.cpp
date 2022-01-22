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
void solve()
{
ll  n, a=0,b=0,m=1, c=-1,k=0, i=0, j=0, l=1e9+5;
string s,p, q;
cin>>n>>s;
vector<ll>v(n,n);
rep(i,0,s.size()){
    if(s[i]=='1') {a=0;b=1;}
    else if(b) {
        a++;
        v[i]=min(v[i],a);
       }
}
b=0;
per(i,n-1,-1){
    if(s[i]=='1') {a=0;b=1;}
    else if(b) {
        a++;
        v[i]=min(v[i],a);
       }
}
rep(i,0,n){
    if(s[i]=='0'){
        k+=v[i];
    }
}
cout<<k<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin. tie(0);cout. tie(0);
ll t=1;
cin>>t;
for(int i=1;i<=t;i++)
{
    cout<<"Case #"<<i<<": ";
solve();
}
return 0;
}