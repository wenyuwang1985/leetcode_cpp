#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(auto it = nums.begin() + 1; it != nums.end(); ++it)
        {
            if(*it == *(it - 1))
                return true;
        }
        return false;
    }
};