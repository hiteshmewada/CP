#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {

    int n, m, k, count = 0;
    cin >> n >> m >> k;
    int n1 = n, m1 = m, k1 = k;

    int a1 = std::min(n / 2, k);
    n = n - (2 * a1);
    k = k - a1;
    a1 += min(n, m, k);
    int a2 = min(n1, min(m1, k1));
    n1 = n1 - a2;
    m1 = m1 - a2;
    k1 = k1 - a2;
    a2 += min(n1 / 2, k1);
    cout << max(a1, a2)<<endl;

    return 0;
}