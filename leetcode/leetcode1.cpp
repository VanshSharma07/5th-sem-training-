#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        for(int i =0; i<jewels.size(); i++)
        {
            for(int j=0; j<stones.size();j++)
            {
                if(jewels[i]==stones[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution ob;
    string jewels = "aA";
    string stones = "aAAbbbb";
    cout<<ob.numJewelsInStones(jewels, stones);
    return 0;
}