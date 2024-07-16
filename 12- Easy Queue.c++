//https://www.spoj.com/problems/QUEUEEZ/en/
#include <bits/stdc++.h>
using namespace std;
void file()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}
int main()
{
    int t;
    cin >> t;
    queue <int> q;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cin >> x;
            q.push(x);
        }
        else if (x == 2)
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else
        {
            if (q.empty())
            {
                cout << "Empty!" << endl;
            }
            else
            {
                cout << q.front() << endl;
            }
        }
    }
}