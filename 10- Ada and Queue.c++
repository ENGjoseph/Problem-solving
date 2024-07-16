//https://www.spoj.com/problems/ADAQUEUE/
#include "bits/stdc++.h"
using namespace std;
#define cewatlac ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main() 
{
    int t;
    cin >> t;
    bool rev = 0;
    deque< int >dq ;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "toFront")
        {
            int x;
            cin >>x;
            if (rev)
            {
                dq.push_back(x);
            }
            else 
            {
                dq.push_front(x);
            }
 
        }
        else if (s == "front"){
            if (rev){
                if (!dq.empty())
                {
                    cout << dq.back() <<"\n"; dq.pop_back(); 
                }
                else 
                {
                    cout << "No job for Ada?\n";
                }
            }
            else 
            {
                if (!dq.empty())
                {
                    cout << dq.front() <<"\n"; dq.pop_front(); 
                }
                else 
                {
                    cout << "No job for Ada?\n";
                }
            }
        }
        else if (s == "back")
        {
            if (rev)
            {
                if (!dq.empty())
                    {
                        cout << dq.front() <<"\n"; dq.pop_front();
                    }
                else
                    {
                    cout << "No job for Ada?\n";
                    }
            }
            else 
            {
                if (!dq.empty())
                    {
                        cout << dq.back() <<"\n"; dq.pop_back(); 
                    }
                else 
                    {
                    cout << "No job for Ada?\n";
                    }
            }
        }
        else if (s == "push_back")
        {
            int x;
            cin >>x;
            if (rev)
            {
                dq.push_front(x);
            }
            else 
            {
                dq.push_back(x);
            }
 
        }
        else if (s == "reverse")
        {
            rev = !rev;
        }
    }
}
 