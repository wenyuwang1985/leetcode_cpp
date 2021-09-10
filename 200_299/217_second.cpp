//垃圾算法，时间不达标
#include <iostream>
#include <vector>

using std::vector;

//
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; ++i)
        {
            for(auto it = nums.begin() + i + 1; it != nums.end(); ++it)
            {
                if(*it == nums.at(i))
                    return true;
            }
        }
        return false;
    }
};
//

int main()
{
    Solution test;
    std::cout << "true is " << true << std::endl;
    vector<int> vec1 {34, 56, 9, 77, 66, 90, 11, 23, 55};
    std::cout << test.containsDuplicate(vec1) << std::endl;
    vector<int> vec2 {34, 56, 9, 77, 66, 90, 11, 23, 55, 56};
    std::cout << test.containsDuplicate(vec2) << std::endl;
}