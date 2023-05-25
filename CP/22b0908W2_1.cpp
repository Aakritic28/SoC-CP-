#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canProduce(int products, const vector<int>& machines, int mid) {
    int total = 0;
    for (int machine : machines) {
        total += mid / machine;
        if (total >= products) {
            return true;
        }
    }
    return false;
}

int shortestTime(int n, int t, const vector<int>& machines) {
    int min_time = *min_element(machines.begin(), machines.end());
    int max_time = *max_element(machines.begin(), machines.end()) * t;

    int result = max_time;
    while (min_time <= max_time) {
        int mid = (min_time + max_time) / 2;
        if (canProduce(t, machines, mid)) {
            result = mid;
            max_time = mid - 1;
        } else {
            min_time = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> machines(n);
    for (int i = 0; i < n; ++i) {
        cin >> machines[i];
    }

    // Calculate and print the shortest time
    cout << shortestTime(n, t, machines) << endl;

    return 0;
}
