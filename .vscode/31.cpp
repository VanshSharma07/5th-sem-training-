#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0; // Handle empty input
        
        int minPrice = prices[0];
        int maxProfit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            if (maxProfit < (prices[i] - minPrice)) {
                maxProfit = prices[i] - minPrice;
            }
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
        }
        return maxProfit;
    }
};

int main() {
    Solution ob;
    vector<int> v = {1, 4, 2, 5, 3};
    int profit = ob.maxProfit(v);
    cout << "Maximum Profit: " << profit << endl;
    return 0;
}
