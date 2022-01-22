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
    unordered_map<ll, ll> mp;
    vector<ll> vec;
    rep(i, 0, n)
    {
        cin >> ar[i];
        vec.pb(ar[i]);
        mp[ar[i]]++;
    }
    vector<vector<ll>> v;
    v.pb(vec);
    i = 1;
    while (1)
    {
        j = 0;
        vector<ll> ve;
        unordered_map<ll, ll> mp1;
        mp1 = mp;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            // cout << ar[i] << " " << mp1[ar[i]] << endl;
            if (ar[i] != mp1[ar[i]])
            {
                ar[i] = mp1[ar[i]];
                j++;
            }
            ve.pb(ar[i]);
            mp[ar[i]]++;
        }
        // cout << j << endl;
        v.pb(ve);
        i++;
        if (!j)
            break;
    }
    // rep(j, 1, 100)
    // {
    //     map<ll, ll> mp2;
    //     mp2 = mp;
    //     mp.clear();
    //     rep(i, 0, n)
    //     {
    //         ar[j][i] = mp2[ar[j - 1][i]];
    //         mp[ar[j][i]]++;
    //     }
    // }
    cin >> k;
    // cout<<v.size()<<endl;
    rep(i, 0, k)
    {
        cin >> a >> b;
        if (b >= v.size())
            cout << v[v.size() - 1][a - 1] << endl;
        else
            cout << v[b][a - 1] << endl;
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