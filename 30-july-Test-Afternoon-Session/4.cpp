#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int count = 0;
        for (char stone : stones) {
            if (jewelSet.count(stone)) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    string jewels, stones;
    
    // Input jewels and stones strings
    cout << "Enter jewels: ";
    cin >> jewels;
    cout << "Enter stones: ";
    cin >> stones;
    
    int result = solution.numJewelsInStones(jewels, stones);
    cout << "Number of jewels in stones: " << result << endl;
    
    return 0;
}
