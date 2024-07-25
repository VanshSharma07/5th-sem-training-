#include <iostream>
#include <string>
#include <vector>

using namespace std;
    // vector<string> str;
    // string word;

    // cout << "Enter a Sentence: \n";

    // while (cin >> word) {
    //     str.push_back(word);
    //     if (cin.peek() == '\n') {
    //         break; 
    //     }
    // }

    // for (int i = 0; i < str.size() - 1; i++) {
    //     for (int j = i + 1; j < str.size(); j++) {
    //         if (str[i] == str[j]) {
    //             cout << "Duplicate found: " << str[i] << " at index " << j << endl;
    //         }
    //     }
    // }
    // return 0;



    vector<string> arrayString(const string& sentence) {
    vector<string> words;
    string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += sentence[i];
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    return words;
    }
