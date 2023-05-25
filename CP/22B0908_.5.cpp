#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        int odd_count = 0, even_count = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 1) odd_count++;
            else even_count++;
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int length = r - l + 1;
            if (length % 2 == 0) {
                cout << (odd_count == even_count ? "YES" : "NO") << endl;
            } else {
                if (a[l - 1] % 2 == 1) {
                    odd_count--;
                    even_count++;
                } else {
                    odd_count++;
                    even_count--;
                }
                a[l - 1] = k;
                cout << (odd_count == even_count ? "YES" : "NO") << endl;
            }
        }
    }
    return 0;
}
