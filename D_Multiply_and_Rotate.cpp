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
ll powermod(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = (y >> 1);
        x = (x * x) % p;
    }
    return res;
}
#define endl "\n"

const ll mod = 1e9 + 7;
ll rotate(ll n)
{
    string s = to_string(n);
    s = s.back() + s;
    s.pop_back();
    ll x = stoi(s);
    return x;
}
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> a >> n;
    // swap(n,a);
    vector<ll> v(n * 10, l);
    v[1] = 0;
    queue<ll> qe;
    qe.push(1);
    while (!qe.empty())
    {
        /* code */
        ll node = qe.front();
        qe.pop();
        ll left = node * a;
        if (left <= (ll)1e6 and v[node] + 1 < v[left])
        {
            v[left] = v[node] + 1;
            if (left == n)
            {
                cout << v[n];
                return;
            }
            qe.push(left);
        }
        if (node >= 10 and (node % 10) != 0)
        {
            ll right = rotate(node);

            // cout<<right<<endl;
            // ll right;
            if ((v[node] + 1) < v[right])
            {
                v[right] = v[node] + 1;
                if (right == n)
                {
                    cout << v[n];
                    return;
                }
                qe.push(right);
            }
        }
        // cout<<node<<" "<<left<<endl;
    }
    if (v[n] == l)
        cout << -1;
    else
        cout << v[n];
    // cout<<(v[n]==l)?"-1":v[n]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}