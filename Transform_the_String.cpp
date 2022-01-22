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
    cin>>s>>p;
    rep(i,0,s.size()){
        l=1e9+5;
        if(p.size()==1){
            b=abs((ll)(s[i]-p[0])); 
            k+=min(b,(ll)(26-b));
            continue;
        }
        a=1e9+5;
        rep(j,0,p.size()){
            l=min(l,abs((ll)(s[i]-p[j])));
            c=min(l,(ll)(26-l));
            a=min(a,c);
        }
        k+=a;
    }
    cout<<k<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin. tie(0);cout. tie(0);
ll t=1,k=0;
cin>>t;
while(t--)
{
    cout<<"Case #"<<++k<<": ";
solve();
}
return 0;
}