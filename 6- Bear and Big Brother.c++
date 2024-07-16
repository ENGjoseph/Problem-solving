//https://codeforces.com/problemset/problem/791/A
#include <iostream>
using namespace std;
int main()
{
    int l , b , counter = 0;
    cin >> l >> b;
    while (l <= b)
    {
        l = l * 3 ;
        b = b * 2 ;
        counter++;
    }
    cout << counter;
}