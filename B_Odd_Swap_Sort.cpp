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
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
#define ff first
#define ss second
#define pp pair<ll, ll>
#define mp make_pair
#define ll long long
#define ld long double
typedef pair<ll, ll> pl;
typedef vector<ll> vl;
typedef vector<pl> vpl;
typedef vector<vl> vvl;
ll powermod(ll x, ll y, ll p);
const ll mod = 1e9 + 7;
#define PI 3.1415926535897932384626
#define endl "\n"

void solve()
{
    ll n, a = 0, b = 0, m = 1, c = 0, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    ll ar[n], od[n] = {0}, ev[n] = {0};
    map<ll, queue<int>> mp, mp1;
    vl v, vec, v2, v3;
    rep(i, 0, n)
    {
        cin >> ar[i];
        if (ar[i] % 2)
            v.pb(ar[i]);
        else
            vec.pb(ar[i]);
        // if (ar[i] % 2)
        //     od[i] = od[i - 1] + 1;
        // else
        //     ev[i] = ev[i - 1] + 1;

        // mp[ar[i]].push(i);
        // mp1[ar[i]].push(i);
        // if (i == 0)
        // {
        //     if (ar[i] % 2)
        //         od[i] = 1;
        //     else
        //         ev[i] = 1;
        //     continue;
        // }
    }
    v2 = v;
    v3 = vec;
    sort(all(v2));
    sort(all(v3));
    rep(i, 0, v.size())
    {
        if (v[i] != v2[i])
        {
            cout << "No" << endl;
            return;
        }
    }
    rep(i, 0, vec.size())
    {
        if (vec[i] != v3[i])
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
    sort(all(v));
    rep(i, 0, n)
    {
        if (ar[i] == v[i])
            continue;
        else
        {
            if (v[i] % 2)
            {
                b = mp[v[i]].front();
                mp[v[i]].pop();
                // deb2(b,i);
                k = od[b] - od[i];
                if (ar[i] % 2)
                    k++;
                // deb(k);
                if (k > 1)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else
            {
                // deb2(v[i],ar[i]);
                b = mp[v[i]].front();
                mp[v[i]].pop();
                // deb2(b,i);
                k = ev[b] - ev[i];
                if (ar[i] % 2 == 0)
                    k++;
                // deb(k);
                if (k > 1)
                {
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }
    per(i, n - 1, -1)
    {
        if (ar[i] == v[i])
            continue;
        else
        {
            if (v[i] % 2)
            {
                b = mp1[v[i]].front();
                mp1[v[i]].pop();
                deb2(b, i);
                if (b > i)
                {
                    k = od[b] - od[i];
                    if (v[i] % 2)
                        k++;
                }
                else
                {
                    k = od[i] - od[b];
                    if (v[b] % 2)
                        k++;
                }
                deb(k);
                if (k > 1)
                {
                    cout << "No" << endl;
                    return;
                }
            }
            else
            {
                // deb2(v[i],ar[i]);
                b = mp1[v[i]].front();
                mp1[v[i]].pop();
                // deb2(b,i);
                if (b > i)
                {
                    k = ev[b] - ev[i];
                    if (v[i] % 2 == 0)
                        k++;
                }
                else
                {
                    k = ev[i] - ev[b];
                    if (v[b] % 2 == 0)
                        k++;
                }
                // deb(k);
                if (k > 1)
                {
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }
    cout << "Yes" << endl;
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