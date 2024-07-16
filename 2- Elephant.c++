//https://codeforces.com/problemset/problem/617/A
#include <iostream>
using namespace std;
int main()
{
    int x, ans = 0;
    cin >> x;
    ans = x / 5;
    if (x % 5 != 0)
    {
        ans++;
    }
    cout<< ans;
}