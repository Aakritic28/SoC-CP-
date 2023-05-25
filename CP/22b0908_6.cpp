#include <iostream>
#include<math.h>
using namespace std;

void hanoi(int n, int a, int b, int c) {
    if (n == 1) {
        cout << a << " " << b << endl;
    } else {
        hanoi(n-1, a, c, b);
        cout << a << " " << b << endl;
        hanoi(n-1, c, b, a);
    }
}

int main() {
    int n;
    cin >> n;
    int moves = pow(2,n) - 1; // equivalent to pow(2, n) - 1
    cout << moves << endl;
    hanoi(n, 1, 3, 2);
    return 0;
}//time complexity is pow(2,n)
