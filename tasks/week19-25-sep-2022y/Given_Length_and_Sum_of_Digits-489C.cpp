#include <iostream>
#include <cmath>
#include <algorithm>
int main() {
    int m, s, i, mint; std::cin >> m >> s;
    if ((m > 1 && s == 0) || (s > m * 9)) { std::cout << "-1 -1"; return 0; }
    for (i = m - 1, mint = s; i >= 0; i--) {
        int minl = std::max(0, mint-9*i);
        if (minl == 0 && i == m - 1 && mint) {
            minl = 1;
        }
        std::cout << minl;
        mint -= minl;
    }
    std::cout << " ";
    for (i = m - 1, mint = s; i >= 0; i--) {
        int maxl = std::min(9, mint);
        std::cout << maxl;
        mint -= maxl;
    }
    return 0;
}

// problem link --> https://codeforces.com/contest/489/problem/C?locale=ru
// Даны длина и сумма цифр CodeForces
