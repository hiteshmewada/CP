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
    cin >> s >> p;
    string r = p;
    j = s.size() - 1;
    per(i, p.size() - 1, -1)
    {
        n = p[i] - '0';
        if (j < 0)
        {
            q += p[i];
            continue;
        }
        else
            a = s[j] - '0';
        // if (a == 0 and j >= 0)
        // {
        //     cout << -1 << endl;
        //     return;
        // }
        if (n >= a)
        {
            b = n - a;
            string z = to_string(b);
            // cout << z << endl;
            q += z;
            j--;
        }
        // else if (n == 0 and a == 0)
        // {
        //     q += '0';
        //     j--;
        // }
        else
        {
            i--;
            if (i >= 0)
            {
                m = p[i] - '0';
                n = m * 10 + n;
                if (n < 10 or n > 18)
                {
                    cout << -1 << endl;
                    return;
                }
                // if (a == 0 and j >= 0)
                // {
                //     cout << -1 << endl;
                //     return;
                // }
                if (n >= a)
                {
                    b = n - a;
                    string z = to_string(b);
                    // cout << z << endl;
                    q += z;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
                // i--;
                j--;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    if (j >= 0)
    {
        cout << -1 << endl;
        return;
    }
    reverse(all(q));
    // int w = 0;
    // per(i, q.size() - 1, -1)
    // {
    //     if (q[i] == '0')
    //     {
    //         w++;
    //     }
    //     else
    //         break;
    // }
    // if (q.size() - w > s.size())
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    string ans;
    int y = 0;
    rep(i, 0, q.size())
    {
        if (q[i] == '0' and y == 0)
        {
            continue;
        }
        else
        {
            ans += q[i];
            y = 1;
        }
    }
    // p = ans;
    // if (p > s)
    //     swap(s, p);
    // j = p.size() - 1;
    // q = "";
    // per(i, s.size() - 1, -1)
    // {
    //     n = s[i] - '0';
    //     if (j < 0)
    //         a = 0;
    //     else
    //         a = p[j] - '0';

    //     b = n + a;
    //     cout<<n<<" "<<a<<endl;
    //     cout<<b<<endl;
    //     string z = to_string(b);
    //     // cout << z << endl;
    //     reverse(all(z));
    //     q += z;
    //     j--;
    // }
    // reverse(all(q));
    // cout<<q<<endl;
    // if (q == r)
    cout << ans << endl;
    // else
    // {
    //     cout << -1 << endl;
    // }
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