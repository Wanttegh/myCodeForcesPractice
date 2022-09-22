#include <iostream>
#include <string>
int main() {
    int n; std::cin >> n; std::cin.ignore();
    std::string* arr = new std::string[n];
    for (int i = 0; i < n; i++) {
        getline(std::cin, arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i].length() > 10) std::cout << arr[i].front() << "" << arr[i].length() - 2 << "" << arr[i].back() << std::endl;
        else std::cout << arr[i] << std::endl;
    }
}

// problem link --> https://codeforces.com/problemset/problem/71/A
