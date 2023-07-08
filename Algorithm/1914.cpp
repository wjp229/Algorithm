#include <iostream>

void hanoi(int n, int from, int to, int via) {
    if (n == 1) {
        std::cout << from << ' ' << to << '\n';
    } else {
        hanoi(n - 1, from, via, to);
        std::cout << from << ' ' << to << '\n';
        hanoi(n - 1, via, to, from);
    }
}

int unsol1914() {
    int n;
    std::cin >> n;

    // 이동 횟수 출력
	std::cout << (int)pow(2, n) - 1 << '\n';

    // 이동 과정 출력
    if (n <= 20) {
        hanoi(n, 1, 3, 2);
    }

    return 0;
}