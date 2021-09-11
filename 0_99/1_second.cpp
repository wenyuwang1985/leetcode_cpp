//速度中游
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //n替代num.size()提速不明显
        int n = nums.size();
        for(int i = 0; i < n - 1; ++i) {
            for(int j = i + 1; j < n; ++j) {
                //下标代替vector.at()函数提速不少
                if(nums[i] + nums[j] == target) {
                    //{}代替vector返回提速不少
                    return {i, j};
                }
            }
        }
        return {};
    }
};