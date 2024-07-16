//https://codeforces.com/problemset/problem/490/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >>n;
    vector < int > v[10];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x].push_back(i+1);
    }
    int mini = min(min(v[1].size(), v[2].size()), v[3].size());
    cout << mini << "\n";
    for (int i = 0; i < mini; i++)
    {
        cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << "\n";
    }
}