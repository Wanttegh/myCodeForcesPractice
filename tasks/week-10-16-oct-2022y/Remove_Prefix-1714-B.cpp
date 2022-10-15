#include <iostream> 
#include <vector>
#include <map>
int main()
{
    int t, n; std::cin >> t;
    while (t--) {
        std::cin >> n;
        std::vector<int> a(n);
        std::map<int, int> m;
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            m[a[i]]++;
            if (m[a[i]] > 1) {
                ans = i + 1;
                break;
            }
        }
        std::cout << ans << "\n";
    }
    return 0;
}
