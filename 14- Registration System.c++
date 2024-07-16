//https://codeforces.com/problemset/problem/4/C
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map < string , int > mp; 
    while (n--)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "Ok\n";
        }
        else
        {
            cout << s << mp[s] <<"\n";
        }
        mp[s]++;
    }
}