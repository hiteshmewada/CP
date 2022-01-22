#pragma GCC optimize("trapv")
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <string.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(), v.end()
#define rep(i, n, v) for (i = n; i < v; i++)
#define per(i, n, v) for (i = n; i > v; i--)
#define ff first
#define ss second
#define pp pair<ll, ll>
#define ll long long
#define ld long double
#define endl "\n"

const ll mod = 1e9 + 7;
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = -1, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    ll ar[n];
    multiset<ll>s1,s2;
    rep(i, 0, n) {cin >> ar[i];s1.insert(ar[i]);s2.insert(-ar[i]);}

    sort(ar, ar + n);
    l=1;
    ll r=n-2,res1=0,res2=0,daman2,daman1;
    m=INT_MAX;
    if (n == 2)
        cout << 0 << endl;
    else
    {
        if(n==3){
            cout<<min({ar[2]-ar[1],ar[1]-ar[0]})<<endl;
            return;
        }
        rep(i,0,n-1) res1+=abs(ar[i]-ar[(n-1)/2]);
        rep(i,1,n) res2+=abs(ar[i]-ar[(n-1)/2+1]);
        m=min(res1,res2);
        while(l<r){
            daman2=ar[n-1]-ar[l];
            daman1=ar[r]-ar[0];
            m=min(m,abs(daman1-daman2));
            if(daman1<daman2) l++;
            else r--;
        }
        cout<<m<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}