#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
   
string toLowerCase(string s) {
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');
        }
    }
    return s;
}
};
int main()
{
    Solution ob;
    string s = "How Are You";
    cout<<ob.toLowerCase(s);
    return 0;
}