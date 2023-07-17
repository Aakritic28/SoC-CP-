#include <bits/stdc++.h>
using namespace std;
 
class Labyrinth {
public:
    string solve(int rows, int cols, vector<string> &grid) {
        // find the start row and col
        int startRow, startCol;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++)
                if (grid[r][c] == 'A') {
                    startRow = r; startCol = c;
                }
        }
        // BFS
        vector<vector<int>> previous(rows, vector<int>(cols, -1));
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        vector<char> directionChars = {'R', 'L', 'D', 'U'};
        deque<pair<int, int>> deq;
        deq.emplace_back(startRow, startCol);
        previous[startRow][startCol] = -2; // end number is -2
        int row, col;
        while (!deq.empty()) {
            row = deq.front().first, col = deq.front().second;
            deq.pop_front();
            if (grid[row][col] == 'B') break;
            for (int i = 0; i < 4; i++) {
                int r = row + directions[i][0];
                int c = col + directions[i][1];
                if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == '#' || previous[r][c] != -1)
                    continue;
                previous[r][c] = i;
                deq.emplace_back(r, c);
            }
        }
 
        // walk backwards using the prev grid to compute the path
        if (grid[row][col] != 'B') return "NO";
        string path;
        while (previous[row][col] != -2) {
            int direction = previous[row][col];
            path.push_back(directionChars[direction]);
            row -= directions[direction][0];
            col -= directions[direction][1];
        }
        reverse(path.begin(), path.end());
        return "YES\n" + to_string(path.size()) + "\n" + path;
    }
};
 
int main() {
    // read input
    int rows, cols;
    cin >> rows >> cols;
    vector<string> grid(rows);
    for (int i = 0; i < rows; i++) cin >> grid[i];
 
    // solve
    Labyrinth solver;
    cout << solver.solve(rows, cols, grid);
 
    return 0;
}