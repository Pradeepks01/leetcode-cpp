// Koko Eating Bananas


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    // Initialize search space for k (min speed = 1, max = largest pile)
    int l = 1;
    int r = *max_element(piles.begin(), piles.end());
    int res = r; // Initialize result with the maximum possible speed

    while (l <= r) {
        int k = (l + r) / 2;  // Middle speed (candidate)

        long long totalTime = 0;
        // Calculate total hours needed at speed k
        for (int p : piles) {
            totalTime += ceil(static_cast<double>(p) / k);  // Round up hours per pile
        }

        if (totalTime <= h) {
            // If possible to eat all in h hours or less, try slower speed
            res = k;       // Update result
            r = k - 1;     // Look left for smaller k
        } else {
            // Too slow → try faster speed
            l = k + 1;
        }
    }

    return res;
}
};


// Time Complexity: O(n * log m)
// Space Complexity: O(1)