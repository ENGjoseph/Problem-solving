// https://vjudge.net/contest/442432#problem/C
#include <iostream>
using namespace std;

int numTrucks(int numCrates, int loadSize)
{
    if (numCrates <= loadSize)
    {
        return 1;
    }
    if (numCrates % 2)
    {
        return numTrucks(numCrates / 2 + 1, loadSize) + numTrucks(numCrates / 2, loadSize);
    }
    return 2 * numTrucks(numCrates / 2, loadSize);
}

int main()
{
  int numCrates, loadSize;

  while (cin >> numCrates >> loadSize)
  {
    cout << numTrucks(numCrates, loadSize) << endl;
  }
}