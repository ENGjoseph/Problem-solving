//https://codeforces.com/problemset/problem/450/A
#include <iostream>
using namespace std;
int main()
{
    int x, y, arr[105], maxi = 0, pos = -1;
    cin >> x >> y;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
        arr[i] = (arr[i] - 1) / y;
    }
    for (int i = 0; i < x; i++)
    {
        if (maxi <= arr[i])
        {
            maxi = arr[i];
            pos = i + 1 ;
        }
    }
        cout << pos;
}