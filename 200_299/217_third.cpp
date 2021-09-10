//抄的，时间不错，空间消耗一般般
//利用set无重复元素特性比较二者size
#include <vector>
#include <set>

using std::vector;
using std::set;

//
class Solution
{
public:
    bool containsDuplicate(vector<int>& nums)
    {
        return set<int>(nums.begin(), nums.end()).size() == nums.size();
    }
};
//

