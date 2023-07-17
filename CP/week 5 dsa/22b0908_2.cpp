#include <iostream>

inline void Solve() {
    int n, m, k;
    std::cin >> n >> m >> k;
    if ((n - 1ll) * n >> 1 < m || m < n - 1) {
        std::cout << "NO" << std::endl;
        return;
    }
    if (n == 1) {
        if (k > 1) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    } else if (m < (n - 1ll) * n >> 1) {
        if (k > 3) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    } else if (k > 2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}

int main() {
    int t;
    std::cin >> t;
    for (register int i = 0; i != t; i++) {
        Solve();
    }
    return 0;
}
