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
void solve(vector<vector<int>> &A, int B)
{
    ll n, a = 0, b = 0, m = 1, c = -1, k = 0, i = 0, j = 0, l = 1e9 + 5;
    string s, p, q;

    int n=A.size();
    int k=0,a=0,j=1;
    for(int i=n-1;i>=0;i--){
        if(A[i][1]<0){
            j=1;
             a=0;
            k+=A[i][1]*j++;
        }
        else{
            if(a+A[i][0]<=B){
                a+=A[i][0];
                k+=A[i][1]*j++;
            }
            else{
                j=1;
                a=0;
                 a+=A[i][0];
                k+=A[i][1]*j++;
            }
        }
    }
    if(k<0) {
        k+=1e9+7;
        return k;
    }
    return k%(1e9+7);






    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin>>t;
    while (t--)
    {
        vector<vector<ll,ll>>v;
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++) cin>>v[i][j];
        }
        cin>>b;
        solve(v,b);
    }
    return 0;
}