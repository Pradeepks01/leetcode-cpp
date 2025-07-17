// Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int n= prices.size();
        int minPrice = INT_MAX;
        for(int i=0;i<n;i++){
            minPrice = min(minPrice,prices[i]);
            maxpro = max(maxpro,prices[i]-minPrice);
        }
        return maxpro;
    }
};


// Time Complexity: O(n)
// Space Complexity: O(1)