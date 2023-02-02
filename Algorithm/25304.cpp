#include <iostream>

using namespace std;

int main()
{
    int total;
    int cnt;

    cin >> total >> cnt;

    int total_price = 0;
    
    for(int i = 0; i < cnt; i++)
    {
        int price;
        int num;
        cin >> price >> num;

        total_price += (price * num);
    }

    if(total == total_price)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
