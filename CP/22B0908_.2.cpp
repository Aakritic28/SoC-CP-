  #include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<long long> ans(n+1); // We use long long to prevent integer overflow
    
    // We start with k=1 since there is only one way to place two knights on a 1x1 chessboard
    for (int k=1; k<=n; k++) {
        long long total = (long long) k*k; // Total number of possible positions for two knights
        long long attacked = 0; // Number of positions that are attacked by the first knight
        
        for (int i=0; i<k; i++) {
            for (int j=0; j<k; j++) {
                int dx = i - 2, dy = j - 1;
                if (dx >= -k+1 && dx <= k-1 && dy >= -k+1 && dy <= k-1 && (dx+dy)%2 == 0) {
                    // Check if this square is attacked by the first knight
                    attacked++;
                }
                
                dx = i - 1, dy = j - 2;
                if (dx >= -k+1 && dx <= k-1 && dy >= -k+1 && dy <= k-1 && (dx+dy)%2 == 0) {
                    // Check if this square is attacked by the first knight
                    attacked++;
                }
            }
        }
        
        ans[k] = (total * (total - 1) / 2) - attacked / 2; // Divide by 2 to avoid counting each pair twice
    }
    
    // Print the answers
    for (int k=1; k<=n; k++) {
        cout << ans[k] << endl;
    }
    
    return 0;
}


