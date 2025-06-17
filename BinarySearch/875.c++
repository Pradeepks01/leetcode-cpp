//Koko Eating Bananas


// Time Complexity: O(n * log m), Space Complexity: O(1)
// where n = number of piles, m = max bananas in any pile.

class Solution {
public:
    // Helper function to check if eating at speed 'mid' allows Koko to finish all bananas in 'h' hours
    bool check(vector<int>& piles, int h, int mid) {
        int ans = 0;
        for (int i = 0; i < piles.size(); i++) {
            // Calculate hours needed for current pile
            ans += (piles[i] / mid);
            if (piles[i] % mid != 0) {
                ans++; // If there's a remainder, one more hour needed
            }
        }
        return ans <= h; // Can Koko eat all bananas in 'h' hours or less?
    }

    // Main function to find the minimum eating speed
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1; // Minimum possible speed
        int high = *max_element(piles.begin(), piles.end()); // Max bananas in a single pile (worst case)

        // Binary search to find the smallest valid speed
        while (low < high) {
            int mid = (low + high) >> 1; // Midpoint speed

            // If she can eat all bananas with speed 'mid' in 'h' hours, try slower speed
            if (check(piles, h, mid)) {
                high = mid;
            } else {
                low = mid + 1; // Else, she needs to eat faster
            }
        }
        return low; // Lowest speed that works
    }
};
