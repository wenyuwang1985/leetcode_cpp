//很一般，时间勉强合格
#include <vector>

using std::vector;
using vec_int = std::vector<int>;

//
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int temp;
        for(int i = 0; i < nums.size() - 1; ++i)
        {
            temp = nums.at(i);
            for(auto it = nums.begin() + i + 1; it != nums.end(); ++it)
            {
                if(*it == temp)
                    return true;
            }
        }
        return false;
    }
};
//