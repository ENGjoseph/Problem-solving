//https://codeforces.com/problemset/problem/509/A
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n][n],i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            x[0][j] = 1;
            x[i][0] = 1;
            if(i+j > 1)
            {
                x[i][j] = x[i-1][j] + x[i][j-1];
            }
        }
    }
    cout << x[n-1][n-1];
}