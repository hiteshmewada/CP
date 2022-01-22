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
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a >> b;
    if ((2 * a - b) % n == 0)
    {
        c = (2 * a - b) / n;
        if (c > 0 and ((a - n * c) == (b - a)))
        {
            cout << "YES" << endl;
            return;
        }
    }
    if ((b + n) % (2 * a) == 0)
    {
        c = (b + n) / (2 * a);
        if (c > 0 and ((a * c - n) == (b - a * c)))
        {
            cout << "YES" << endl;
            return;
        }
    }
    if ((2 * a - n) % b == 0)
    {
        c = (2 * a - n) / b;
        // cout<<c<<endl;
        if (c > 0 and ((a - n) == (b * c - a)))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
    // c = (n + a) / 2;
    // m = 2 * a;
    // if((n + a) % 2==0 and c%a==0){
    //     cout << "YES" << endl;
    //     return;
    // }
    // if(n==a){
    //     if(n>=b and n%b==0) cout<<"YES"<<endl;
    //     else
    //     cout << "NO" << endl;
    //     return;
    // }
    // if(n==b){
    //     if(n>=a and n%a==0) cout<<"YES"<<endl;
    //     else
    //     cout << "NO" << endl;
    //     return;
    // }
    // if(b==a){
    //     if(a>=n and a%n==0) cout<<"YES"<<endl;
    //     else
    //     cout << "NO" << endl;
    //     return;
    // }
    // if ((m - n) % b == 0 or (m - b) % n == 0)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
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