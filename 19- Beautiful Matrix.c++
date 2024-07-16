//https://codeforces.com/problemset/problem/263/A
#include <iostream>
using namespace std;
int main()
{
    int x[5][5],a,b ,ii, jj, total=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x[i][j];
            if (x[i][j]==1)
            {
                a=i;
                b=j;
            }
        }
    }
    if (a-2 > 0)
    {
        ii = a-2;
    }
    else
    {
        ii= 2-a;
    }
    if (b-2 > 0)
    {
        jj = b-2;
    }
    else
    {
        jj = 2-b;
    }
    total = ii + jj;
    cout << total;
}