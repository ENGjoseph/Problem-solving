//https://www.hackerrank.com/challenges/balanced-brackets/problem
#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
bool is_open(char x)
{
    if (x=='(' || x == '[' || x == '{')
    {
        return 1;
    }
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack <char> st;
        bool ans = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (is_open(s[i]))
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty() && s[i] == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else if (!st.empty() && s[i] == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (!st.empty() && s[i] == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    ans = 0;
                    break;
                }
            }
        }
        if (ans && st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}