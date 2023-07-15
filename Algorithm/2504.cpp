#include <iostream>
#include <stack>

using namespace std;

int unsol2504()
{
    char Input;
    stack<char> InputStack;
    stack<int> SumBuffer;

    int TmpSum = 1;
    int SumRes = 0;

    string Res;

    while (true)
    {
        cin >> Input;

        if(cin.eof()) break;
        
        if (Input == '(' || Input == '[')
        {
            InputStack.push(Input);
        }
        else if (Input == ')')
        {
            if (InputStack.top() == '(')
            {
                InputStack.pop();
                cout << 2;
            }
            
            if (InputStack.empty()) continue;

            cout << InputStack.top();

            if (InputStack.top() == ')' || InputStack.top() == ']')
            {
                SumBuffer.push(2);
            }
            else
            {
                TmpSum *= 2;
            }
        }
        else if (Input == ']')
        {
            if (InputStack.top() == '[')
            {
                InputStack.pop();
                cout << 3;
            }

            if (InputStack.empty()) continue;

            cout << InputStack.top();

            if (InputStack.top() == ')' || InputStack.top() == ']')
            {
                SumBuffer.push(3);
            }
            else
            {
                TmpSum *= 2;
            }
        }
    }

    if(InputStack.empty())
    {
        while(!SumBuffer.empty())
        {
            SumRes += SumBuffer.top();
            SumBuffer.pop();
        }
    }

    cout << SumRes;


    return 0;
}
