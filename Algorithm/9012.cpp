#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int sol9012()
{
    int test = 0;

    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        stack<char> cnt;
        char str[50];
        cin >> str;

        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] == '(')
            {
                cnt.push(str[j]);
            }
            else if (str[j] == ')')
            {
                if(cnt.empty() || cnt.top() != '(')
                {
                    cout << "NO\n";
                    break;
                }
                else
                {
                    cnt.pop();
                }
            }
            if (j == strlen(str) - 1 && cnt.empty())
                cout << "YES\n";
        }
        
        while (!cnt.empty())
        {
            cnt.pop();
        }
    }

    return 0;
}
