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
    cin >> n >> a >> b >> c;
    ll s1 = 0, s2 = 0;
    ll t1, t2;
    t1 = n;
    t2 = b;
    while (t1)
    {
        t1 /= 10;
        s1++;
    }
    while (t2)
    {
        t2 /= 10;
        s2++;
    }
    if (n < b)
    {
        i = s2 - s1;
        if (a >= i)
        {
            while (i--)
            {
                a--;
                n *= 10;
            }
            if (a > c)
                cout << ">" << endl;
            else if (a < c)
                cout << "<" << endl;
            else
            {
                if (n > b)
                    cout << ">" << endl;
                else if (n < b)
                    cout << "<" << endl;
                else
                    cout << "=" << endl;
            }
        }
        else
            cout << "<" << endl;
    }
    else if (n > b)
    {
        i = s1 - s2;
        if (c >= i)
        {
            while (i--)
            {
                c--;
                b *= 10;
            }
            if (a > c)
                cout << ">" << endl;
            else if (a < c)
                cout << "<" << endl;
            else
            {
                if (n > b)
                    cout << ">" << endl;
                else if (n < b)
                    cout << "<" << endl;
                else
                    cout << "=" << endl;
            }
        }
        else
            cout << ">" << endl;
    }
    else
    {
        if (a > c)
            cout << ">" << endl;
        else if (a < c)
            cout << "<" << endl;
        else
            cout << "=" << endl;
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