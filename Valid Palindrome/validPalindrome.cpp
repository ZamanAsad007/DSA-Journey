#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0, r=s.length()-1;
        while(l<r){
            while (l<r && !alphaNum(s[l])){
                l++;
            }
                
            while(r>l && !alphaNum(s[r])){
                r--;
            }
                
            if(tolower(s[l]) != tolower(s[r]))
                return false;
            
            l++;
            r--;
        }
        return true;
    }

    bool alphaNum(char c){
        return(c>='A' && c<='Z'||
                c>='a' && c<='z' ||
                c>='0' && c<='9' );
    }
};

int main() {
    Solution solution;
    string s = "A man, a plan, a canal: Panama";
    bool result = solution.isPalindrome(s);
    if (result) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}