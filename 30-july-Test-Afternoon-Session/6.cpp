#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(9); // Adjust size if needed, or use dynamic resizing
        string word;
        
        // Parse the string to extract words and their positions
        for (int i = 0; i < s.size(); ++i) {
            if (isdigit(s[i])) {
                int position = s[i] - '0' - 1; // Convert character digit to int and make it 0-based
                words[position] = word;
                word = "";
                ++i; // Skip the space after the digit
            } else {
                word += s[i];
            }
        }

        // Reconstruct the sorted sentence
        string result;
        for (const string& w : words) {
            if (!w.empty()) {
                result += w + " ";
            }
        }
        
        // Remove the trailing space if present
        if (!result.empty()) {
            result.pop_back();
        }

        return result;
    }
};

int main() {
    Solution solution;
    string input;
    
    cout << "Enter the scrambled sentence: ";
    getline(cin, input);
    
    string sortedSentence = solution.sortSentence(input);
    cout << "Sorted sentence: " << sortedSentence << endl;
    
    return 0;
}
