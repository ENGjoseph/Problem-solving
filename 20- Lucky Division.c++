//https://codeforces.com/problemset/problem/122/A
#include <iostream>
using namespace std;
int main()
{
    long long x, counter=0;
    cin >> x;
    while (x%10 != 0)
    {
        if (x%4 == 0)
        {
            cout<< "YES";
            return 0;
        }
        if (x%10 == 4 || x%10 == 7 )
        {
            counter++;
            x = x/10;
        }
        else
        {
            cout<< "NO";
            return 0;
        }
    }
    if (counter == 3)
    {
        cout << "YES";
    }
}