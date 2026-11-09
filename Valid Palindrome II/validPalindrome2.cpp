#include<iostream>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int left=0, right=s.size()-1;

        while(left<right){
            if (s[left] != s[right]){
                return isPalindrome(s, left+1, right)|| isPalindrome(s, left, right-1);
            }
            left++;
            right--;
        }
        return true;
}

private:
    bool isPalindrome(const string& s, int left, int right){
        
        while(left<right){
            if(s[left] != s[right]){
                return false;
            }

            left++;
            right--;

        }
        return true;
    }
};

int main(){
    Solution solution;
    string s = "abbda";
    bool result = solution.validPalindrome(s);
    if(result){
        cout << "The string can be a palindrome by removing at most one character." << endl;
    } else {
        cout << "The string cannot be a palindrome even after removing one character." << endl;
    }
    return 0;
}