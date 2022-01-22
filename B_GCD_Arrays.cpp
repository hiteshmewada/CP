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

const ll mod = 1e9;
ll pre[1000000] = {0};
void SieveOfEratosthenes()
{
    ll n = mod;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    pre[0] = 0;
    pre[1] = 0;
    // pre[2]=1;
    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
        {
            cout << p << endl;
            pre[p] = pre[p - 1] + 1;
        }
        else
            pre[p] = pre[p - 1];
    // pre=prime;
}
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n >> a >> b;
    if (n == a)
    {
        i = __gcd(n, a);
        if (i == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        return;
    }
    i = a - n + 1;
    if (a % 2 and n % 2)
    {
        c = i / 2;
        c++;
        m = c;
    }
    else if (a % 2 == 0 and n % 2)
    {
        c = i / 2;
        m = c;
        // c++;
    }
    else if (a % 2 and n % 2 == 0)
    {
        c = i / 2;
        m = c;
        // c++;
    }
    else
    {
        c = i / 2;
        c++;
        m = i - c;
    }
    if (m > b)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    // SieveOfEratosthenes();
    while (t--)
    {
        solve();
    }
    return 0;
}