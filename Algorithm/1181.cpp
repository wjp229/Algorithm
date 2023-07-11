#include <algorithm>
#include <iostream>
#include <string>
#include <list>

using namespace std;

int Compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    else
    {
        return a.length() < b.length();
    }
}

int sol1181()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false); 
    
    int TestCase = 0;

    cin >> TestCase;

    string* words = new string[TestCase];

    for (int i = 0; i < TestCase; i++)
    {
        string word;

        cin >> word;

        words[i] = word;
    }

    sort(words, words+TestCase, Compare);

    for (int i = 0; i < TestCase; i++)
    {
        if(i != TestCase-1 && words[i] == words[i+1])
        {
            continue;
        }
        
        cout << words[i] << "\n";
    }

    return 0;
}
