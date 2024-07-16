//https://codeforces.com/problemset/problem/231/A
#include <iostream>
using namespace std;
int main()
{
    int n, count=0,i;
    bool x,y,z;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        if (x+y+z>=2)
        {
            count++;
        }
    }
    cout << count;
}