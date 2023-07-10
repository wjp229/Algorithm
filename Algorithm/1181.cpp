#include <iostream>
#include <string>
#include <list>

using namespace std;

bool Compare(string a, string b)
{
    if (a.length() > b.length())
    {
        return true;
    }
    else if (a.length() < b.length())
    {
        return false;
    }
    else if(a.length() == b.length())
    {
        int Cnt = 0;
        
        while (Cnt < a.length())
        {
            if ((int)a[Cnt] > (int)b[Cnt])
            {
                return true;
            }
            else if ((int)b[Cnt] > (int)a[Cnt])
            {
                return false;
            }
            
            Cnt++;
        }
    }

    return false;
}

int unsol1181()
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

    for (int i = 0; i < TestCase; i++)
    {
        for (int j = 1; j < TestCase - i; j++)
        {
            if(words[j-1] == words[j])
            {
                for(int k = j; k < TestCase; k++)
                {
                    words[k] = "";
                }

                TestCase--;
            }

            bool bIsShort = Compare(words[j-1], words[j]);
            
            if (bIsShort)
            {
                string tmp = words[j - 1];
                words[j - 1] = words[j];
                words[j] = tmp;
            }
        }
    }
    
    for (int i = 0; i < TestCase; i++)
    {
        
        cout << words[i] << "\n";
    }

    return 0;
}
