#include <iostream>
#include <vector>

// Structure to represent a road
struct Road {
    int from;
    int to;
    int cost;

    Road(int f, int t, int c) : from(f), to(t), cost(c) {}
};

// Function to calculate the smallest amount of money the government should spend on redirecting roads
int calculateMinimumCost(int n, const std::vector<Road>& roads) {
    // Calculate the cost of the initial orientation
    int initialOrientationCost = 0;
    for (const Road& road : roads) {
        initialOrientationCost += road.cost;
    }

    int minCost = initialOrientationCost;

    // Try changing the orientation of each road and update the minimum cost
    for (const Road& road : roads) {
        // Calculate the cost of the alternative orientation
        int alternativeOrientationCost = initialOrientationCost - road.cost;

        // Update the minimum cost if the alternative orientation cost is smaller
        if (alternativeOrientationCost < minCost) {
            minCost = alternativeOrientationCost;
        }
    }

    return minCost;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Road> roads;

    // Read the roads' information
    for (int i = 0; i < n; i++) {
        int from, to, cost;
        std::cin >> from >> to >> cost;
        roads.emplace_back(from, to, cost);
    }

    int minimumCost = calculateMinimumCost(n, roads);
    std::cout << minimumCost << std::endl;

    return 0;
}
