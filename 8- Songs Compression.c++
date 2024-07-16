//https://codeforces.com/problemset/problem/1015/C
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    long long n, m;
    cin >> n >> m;
    long long  s[n], c[n];
    long long sum_s = 0, sum_c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> c[i];
        sum_s += s[i];
        sum_c += c[i];
    }
    if (sum_s <= m)
    {
        cout << 0;
    }
    else if (sum_c > m)
    {
        cout << -1;
    }
    else
    {
        long long counter = 0, r;
        r = sum_s - m ;
        long long  remain[n];
        for (int i = 0; i < n; i++)
            {
                remain[i] = s[i] - c[i];
            }
        sort(remain, remain+n);
        reverse(remain, remain + n);
        for (int i = 0; i < n; i++)
        {
            r -= remain[i];
            counter++;
            if (r <= 0)
                break;
        }
    cout << counter;
    }
}