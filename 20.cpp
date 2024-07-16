#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    // 1. Concatenation
    string str1 = "Hello";
    string str2 = "World";
    string concatenatedResult = str1 + " " + str2; // "Hello World"
    cout << "Concatenation: " << concatenatedResult << endl;

    // 2. Substring Extraction
    string str = "Hello World";
    string substringResult = str.substr(0, 5); // "Hello"
    cout << "Substring Extraction: " << substringResult << endl;

    // 3. Splitting a String
    string fruits = "apple,banana,cherry";
    vector<string> splitResult;
    stringstream ss(fruits);
    string item;
    while (getline(ss, item, ',')) {
        splitResult.push_back(item);
    }
    cout << "Splitting a String: ";
    for (const auto& fruit : splitResult) {
        cout << fruit << " ";
    }
    cout << endl;

    // 4. Replacing Substrings
    string greeting = "Hello World";
    size_t pos = greeting.find("World");
    if (pos != string::npos) {
        greeting.replace(pos, 5, "C++");
    }
    cout << "Replacing Substrings: " << greeting << endl;

    // 5. Trimming Whitespace
    string paddedStr = "   Hello World   ";
    size_t start = paddedStr.find_first_not_of(" ");
    size_t end = paddedStr.find_last_not_of(" ");
    string trimmedResult = paddedStr.substr(start, end - start + 1); // "Hello World"
    cout << "Trimming Whitespace: " << trimmedResult << endl;

    return 0;
}

