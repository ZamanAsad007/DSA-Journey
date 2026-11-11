#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0, j= nums.size()-1, k=nums.size()-1;
        vector<int> ans(nums.size());
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                ans[k]= nums[i]*nums[i];
                i++;
            }
            else{
                ans[k]=nums[j]*nums[j];
                j--;
            }
            k--;
        }
        return ans;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> result = solution.sortedSquares(nums);
    
    cout << "Sorted squares: ";
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}