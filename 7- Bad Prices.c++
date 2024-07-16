//https://codeforces.com/problemset/problem/1213/B
#include <iostream>
using namespace std;
int main()
{
    long long t,n,counter = 0,a[150005];
    cin >> t;
    while (t--)
    {
        cin >> n;
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            long long mini = 1000005 , counter =0;
            for (int i = n-1; i > -1; i--)
            {
                if (mini <a[i])
                {
                    counter ++;
                }
                mini = min(mini, a[i]);
            }
            cout << counter << "\n";
    }
}