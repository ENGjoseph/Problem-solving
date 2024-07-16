// https://codeforces.com/problemset/problem/591/A
#include <iostream>
using namespace std;
int main()
{
    float p, q, l, ans;
    float x;
    cin >> l >> p >> q;
    x = l / (p + q);
    ans = p * x;
    cout << ans;
}