#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid)
     {
        int n = grid.size();
        int totalElements = n * n;
        vector<int> count(totalElements + 1, 0);
        for (const auto& row : grid) 
        {
            for (int num : row)
            {
                count[num]++;
            }
        }
        int repeated = -1;
        int missing = -1;
        for (int i = 1; i <= totalElements; ++i) 
        {
            if (count[i] == 2) 
            {
                repeated = i;
            } else if (count[i] == 0) 
            {
                missing = i;
            }
        }
        return {repeated, missing};
    }
};