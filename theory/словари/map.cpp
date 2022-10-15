#include <iostream> 
#include <map>
int main()
{
    std::map<char, int> m;
    std::string s; std::cin >> s;
    for (auto c : s) {
        m[c]++;
    }
    for (auto e : m) {
        std::cout << e.first << " " << e.second << "\n";
    }
}
