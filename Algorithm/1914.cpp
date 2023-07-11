#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void hanoi(int n, int from, int via, int to) {
    if (n == 1) {
        std::cout << from << ' ' << to << '\n';
    } else {
        hanoi(n - 1, from, to, via);
        std::cout << from << ' ' << to << '\n';
        hanoi(n - 1, via, from, to);
    }
}

int sol1914() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    std::cin >> n;

    // 이동 횟수 출력
    string a = to_string(pow(2, n));
	
    int x = a.find('.');
    a = a.substr(0, x);
    a[a.length() - 1] -= 1;

    // 이동 과정 출력
    if (n <= 20) {
        hanoi(n, 1, 2, 3);
    }

    return 0;
}