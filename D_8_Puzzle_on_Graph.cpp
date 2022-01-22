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
list<ll> gr[10];
void solve()
{
    ll n, a = 0, b = 0, m = 1, c = -1, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;
    cin >> n;
    rep(i, 0, n)
    {
        cin >> a >> b;
        gr[a].pb(b);
        gr[b].pb(a);
    }
    string st(9, '9');
    for (char hit = '1'; hit < '9'; hit++)
    {
        cin >> m;
        st[m - 1] = hit;
    }
    // cout<<st<<endl;
    queue<string> qu;
    map<string, int> mp;
    qu.push(st);
    mp[st] = 0;
    while (!qu.empty())
    {
        string top = qu.front();
        qu.pop();
        int save;
        rep(i, 0, 9)
        {
            if (top[i] == '9')
            {
                save = i + 1;
                break;
            }
        }
        for (auto x : gr[save])
        {
            string temp = top;
            swap(temp[x - 1], temp[save - 1]);
            if (mp.find(temp) != mp.end())
            {
            }
            else
            {
                mp[temp] = mp[top] + 1;
                qu.push(temp);
            }
        }
    }
    // for(auto x:mp) cout<<x.first<<endl;
    string fina = "123456789";
    if (mp.find(fina) != mp.end())
        cout << mp[fina] << endl;
    else
        cout << -1 << endl;
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