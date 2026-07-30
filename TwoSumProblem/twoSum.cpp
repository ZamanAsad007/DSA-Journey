#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (mpp.find(complement) != mpp.end()) {
                return {mpp[complement], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);
    cout << "Indices of the two numbers that add up to " << target << ": [" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}