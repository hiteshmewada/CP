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
    vl v(n + 1);
    rep(i, 1, n + 1) cin >> v[i];
    // deb2(v[1],v[0]);
    vvl sparse(n + 1, vl(21));
    rep(i, 1, n + 1) sparse[i][0] = v[i];
    rep(i, 1, 21)
    {
        for (int j = 1; j + (1 << i) <= n + 1; j++)
        {
            sparse[j][i] = __gcd(sparse[j][i - 1], sparse[j + (1 << (i - 1))][i - 1]);
        }
    }
    vvl segs;
    rep(i, 1, n + 1)
    {
        l = i;
        ll r = n, ans = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2, rangel = i, ranger = mid;
            ll val = v[rangel];
            // deb2(mid,rangel);
            // deb(v[1]);
            per(j, 20, -1)
            {
                // deb(val);
                if ((1 << j) <= (ranger - rangel + 1))
                {
                    // deb2(val,sparse[rangel][j]);
                    val = __gcd(val, sparse[rangel][j]);
                    rangel += (1 << j);
                }
            }
            // deb(val);
            if (val == (mid - i + 1)) // range gcd==length of subarray// problematic
            {
                ans = mid;
                break;
            }
            else if (val > (mid - i + 1))
                l = mid + 1;
            else
                r = mid - 1;
        }
        // deb(ans);
        if (ans != -1)
            segs.pb({i, ans});
    }
    // deb(segs.size());
    sort(all(segs), [&](const vector<ll> &a, const vector<ll> &b)
         { return (b[1] > a[1]) or (b[1] == a[1] and b[0] > a[0]); }); // {a,b} b ascending
    vl ans(n + 1, 0);
    ll smallR = -1;
    set<ll> st;
    rep(i, 0, segs.size())
    {
        l = segs[i][0];
        ll r = segs[i][1];
        // deb2(l, r);
        if (l <= smallR and smallR <= r)
            continue;
        smallR = r;
        st.insert(r);
    }
    rep(i, 1, n + 1)
    {
        ans[i] = ans[i - 1];
        if (st.count(i))
            ans[i]++;
        cout << ans[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    // cin >> t;
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