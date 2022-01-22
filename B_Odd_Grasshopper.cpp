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
    cin>>n>>a;
    if(a==0){
        cout<<n<<endl;return;
    }
    if(n%2){
        b=a/4;
        c=a%4;
        i=4*(b);
        j=4*(b+1);
        if(c==0) k=n+0;
        else if(c==1) k=n+(i+1);
        else if(c==2) k=n-1;
        else k=n-j;
    }
    else{
        b=a/4;
        c=a%4;
        i=4*(b+1);
        j=4*b;
        if(c==0) k=n+0;
        else if(c==1) k=n-(j+1);
        else if(c==2) k=n+1;
        else k=i+n;
    }
    cout<<k<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin. tie(0);cout. tie(0);
ll t=1;
cin>>t;
while(t--)
{
solve();
}
return 0;
}