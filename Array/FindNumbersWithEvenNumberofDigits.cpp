#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int count = 0;
        for(int num : nums)
        {
            int len = to_string(num).length();
            if(len % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};