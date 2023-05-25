#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1) {
                sum++;
            } else {
                sum--;
            }
        }
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            int len = r - l + 1;
            if (len % 2 == 1 && k % 2 == 1) {
                cout << "NO\n";
            } else {
                if (len % 2 == 0 && k % 2 == 1) {
                    sum += len / 2;
                } else if (len % 2 == 0 && k % 2 == 0) {
                    sum -= len / 2;
                }
                if (k % 2 == 1) {
                    sum += len / 2 + (len % 2 == 1 ? 1 : 0);
                } else {
                    sum -= len / 2;
                }
                if (sum % 2 == 1) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}
