// https://vjudge.net/problem/HackerRank-recursive-digit-sum
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long sup(string n, int k)
{
    long long ans = 0; 
    for (int i = 0; i < n.size(); i++)
    {
        ans += n[i] - 48;
    }
    ans *= k;
    if (ans < 10)
    {
        return ans;
    }
    return sup(to_string(ans), 1);   
}

int main()
{
    long long k;
    string n;
    cin >> n >> k;
    cout << sup(n,k);
}