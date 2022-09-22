#include <iostream>

int main() {
    int w, k, counter = 0; std::cin >> w;
    for (int i = 1; i < w; i++) {
        k = w - i;
        if (k % 2 == 0 && i % 2 == 0) counter++;
        else if (i == w - 1 && i % 2 != 0) counter += 0;
    }
    if (counter > 0) std::cout << "YES";
    else std::cout << "NO";
    return 0;
}