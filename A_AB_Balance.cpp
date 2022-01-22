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
    cin >> s;
    rep(i, 0, s.size())
    {
        if (i + 1 < s.size() and s[i] == 'a' and s[i + 1] == 'b')
            a++;
    }
    rep(i, 0, s.size())
    {
        if (i + 1 < s.size() and s[i] == 'b' and s[i + 1] == 'a')
            a--;
    }
    if (a == 0)
    {
        cout << s << endl;
    }
    else
    {
        rep(i,0,s.size()-1) cout<<s[i];
        if (a ==1)
        {
            cout<<"a"<<endl;
        }
        else{
             cout<<"b"<<endl;
        }
        // cout<<s<<endl;
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