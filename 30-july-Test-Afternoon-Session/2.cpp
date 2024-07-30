#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int C = A[0].size();
        for (auto& row : A) {
            for (int i = 0; i < (C + 1) / 2; ++i) {
                // Swap and invert the values
                int tmp = row[i] ^ 1;
                row[i] = row[C - 1 - i] ^ 1;
                row[C - 1 - i] = tmp;
            }
        }
        return A;
    }
};

// Function to print a 2D vector
void printVector(const vector<vector<int>>& vec) {
    for (const auto& row : vec) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    Solution solution;
    vector<vector<int>> image = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    
    cout << "Original Image:" << endl;
    printVector(image);
    
    vector<vector<int>> result = solution.flipAndInvertImage(image);
    
    cout << "Flipped and Inverted Image:" << endl;
    printVector(result);
    
    return 0;
}
