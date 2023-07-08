#include <iostream>
#include <string>
#include <stack>

using namespace std;

int sol9012()
{
    int test = 0;

    cin >> test;


    for (int i = 0; i < test; i++)
    {
        stack<char> cnt;

        string str;
        cin >> str;

        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == '(')
            {
                cnt.push(str[j]);
            }
            
            else if (str[j] == ')')
            {
                if(cnt.empty())
                {
                    cout << "NO\n";
                    break;
                }
                else
                {
                    cnt.pop();
                }
            }

            if(j == str.length() - 1 && cnt.empty())
            {
                cout << "YES\n";
            }
            else if(j == str.length() - 1)// && !cnt.empty())
                {
                
                cout << "NO\n";
                }
        }
    }

    return 0;
}
