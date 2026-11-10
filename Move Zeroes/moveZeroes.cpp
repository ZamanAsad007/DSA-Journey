#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};

int main(){
    Solution solution;
    vector<int> nums = {0,1,0,3,12};
    cout << "Array before moving zeroes: ";
    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;
    
    solution.moveZeroes(nums);
    
    cout << "Array after moving zeroes: ";
    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}