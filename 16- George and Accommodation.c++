//https://codeforces.com/problemset/problem/467/A
#include <iostream>
using namespace std;
int main()
{
    int n, p, q, ans, total=0,i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (q-p >= 2)
        {
            total++;
        }
    }
    cout << total;
}