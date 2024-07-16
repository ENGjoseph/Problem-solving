//https://atcoder.jp/contests/abc218/tasks/abc218_b
#include <iostream>
using namespace std;
int main()
{
    int x;
    string s= "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
        cin >> x;
        cout << s[x-1];
    }
}