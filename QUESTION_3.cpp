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
    cin>>n;
    vector<ll>ar;
    rep(i,0,n){
        cin>>a;
        // if(a>ar[i-1]){
        //     ar[i]=a;continue;
        // }
        if(i==0)
        ar.pb(a);
        if(i!=0){
            std::vector<ll>::iterator low1;
            low1=upper_bound(ar.begin(),ar.end(),a);
           // cout<<(low1-ar.begin())<<" ";
            if(low1-ar.begin()==ar.size()) k+=0;
            else
            k+=ar.size()-(low1-ar.begin());
            //cout<<k<<". ";
            ar.pb(a);
            sort(all(ar));
            // ll hit=0;
            // j=i-1;
            // m=(j+(n-1))/2;
            // while(m<=(n-1) && m>=0){
            //     if(ar[m]<= a ){
            //         hit=max(hit,m);
            //         m++;
            //     }
            //     else if(hit) break;
            //     else m--;
            //    m=(m+(n-1))/2;
            // }
            // k+=(n-hit-1);
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
while(t--)
{
solve();
}
return 0;
}