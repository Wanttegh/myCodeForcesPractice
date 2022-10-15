#include <iostream> 
#include <algorithm>
int main()
{
    int t; std::cin >> t;
    while (t--) {
        int s, w, h, m, H, M, ans = 3 * 24 * 60, n, day = 24*60;
        std::cin >> n >> H >> M;
        s = 60 * H + M;
        while (n--) {
            std::cin >> h >> m;
            w = 60 * h + m;
            if (w - s < 0) {
                w += day;
            }
            ans = std::min(ans, w - s);
        }
        std::cout << "\n" << ans / 60 % 24 << " " << ans % 60 << "\n";
    }
    return 0;
}
